#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_VERTICES 100

typedef struct
{
    int vertices[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
} Graph;

typedef struct
{
    int key;
    int vertex;
} HeapNode;

typedef struct
{
    HeapNode *array;
    int *positions;
    int capacity;
    int size;
} MinHeap;

Graph *createGraph(int numVertices)
{
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    graph->numVertices = numVertices;

    for (int i = 0; i < numVertices; ++i)
    {
        for (int j = 0; j < numVertices; ++j)
        {
            graph->vertices[i][j] = 0;
        }
    }

    return graph;
}

MinHeap *createMinHeap(int capacity)
{
    MinHeap *heap = (MinHeap *)malloc(sizeof(MinHeap));
    heap->positions = (int *)malloc(capacity * sizeof(int));
    heap->array = (HeapNode *)malloc(capacity * sizeof(HeapNode));
    heap->size = 0;
    heap->capacity = capacity;

    return heap;
}

void minHeapify(MinHeap *heap, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < heap->size && heap->array[left].key < heap->array[smallest].key)
        smallest = left;

    if (right < heap->size && heap->array[right].key < heap->array[smallest].key)
        smallest = right;

    if (smallest != i)
    {
        // Swap the nodes and update positions
        int tempPos = heap->positions[heap->array[i].vertex];
        heap->positions[heap->array[i].vertex] = heap->positions[heap->array[smallest].vertex];
        heap->positions[heap->array[smallest].vertex] = tempPos;

        HeapNode temp = heap->array[i];
        heap->array[i] = heap->array[smallest];
        heap->array[smallest] = temp;

        // Recursively move down in the heap
        minHeapify(heap, smallest);
    }
}

void insertMinHeap(MinHeap *heap, int key, int vertex)
{
    int i = heap->size;
    heap->size++;

    while (i > 0 && heap->array[(i - 1) / 2].key > key)
    {
        heap->array[i] = heap->array[(i - 1) / 2];
        heap->positions[heap->array[i].vertex] = i;
        i = (i - 1) / 2;
    }

    heap->array[i].key = key;
    heap->array[i].vertex = vertex;
    heap->positions[vertex] = i;
}

HeapNode extractMin(MinHeap *heap)
{
    if (heap->size == 0)
    {
        HeapNode node;
        node.vertex = -1; // Invalid vertex
        return node;
    }

    HeapNode root = heap->array[0];
    HeapNode lastNode = heap->array[heap->size - 1];
    heap->array[0] = lastNode;

    heap->positions[root.vertex] = heap->size - 1;
    heap->positions[lastNode.vertex] = 0;

    --heap->size;
    minHeapify(heap, 0);

    return root;
}

void decreaseKey(MinHeap *heap, int vertex, int key)
{
    int i = heap->positions[vertex];

    heap->array[i].key = key;

    while (i > 0 && heap->array[(i - 1) / 2].key > heap->array[i].key)
    {
        // Swap the nodes and update positions
        int parentIndex = (i - 1) / 2;
        HeapNode temp = heap->array[i];
        heap->array[i] = heap->array[parentIndex];
        heap->array[parentIndex] = temp;

        heap->positions[temp.vertex] = i;
        heap->positions[heap->array[i].vertex] = parentIndex;

        // Move up in the heap
        i = parentIndex;
    }
}

int isInMinHeap(MinHeap *heap, int vertex)
{
    return (heap->positions[vertex] < heap->size);
}

void printMST(Graph *graph, int parent[])
{
    printf("Cost Adjacency Matrix of the Minimum Spanning Tree:\n");

    for (int i = 0; i < graph->numVertices; ++i)
    {
        for (int j = 0; j < graph->numVertices; ++j)
        {
            printf("%04d ", graph->vertices[i][j]);
        }
        printf("\n");
    }

    printf("Total Weight of the Minimum Spanning Tree: ");
    int totalWeight = 0;
    for (int i = 1; i < graph->numVertices; ++i)
    {
        totalWeight += graph->vertices[i][parent[i]];
    }
    printf("%d\n", totalWeight);
}

void primMST(Graph *graph, int startVertex)
{
    int numVertices = graph->numVertices;
    int parent[numVertices];
    int key[numVertices];

    MinHeap *heap = createMinHeap(numVertices);

    for (int v = 0; v < numVertices; ++v)
    {
        parent[v] = -1;
        key[v] = INT_MAX;
        insertMinHeap(heap, key[v], v);
    }

    key[startVertex] = 0;
    decreaseKey(heap, startVertex, key[startVertex]);

    while (heap->size != 0)
    {
        HeapNode extractedNode = extractMin(heap);
        int u = extractedNode.vertex;

        for (int v = 0; v < numVertices; ++v)
        {
            if (graph->vertices[u][v] && isInMinHeap(heap, v) && graph->vertices[u][v] < key[v])
            {
                key[v] = graph->vertices[u][v];
                parent[v] = u;
                decreaseKey(heap, v, key[v]);
            }
        }
    }

    printMST(graph, parent);
}

int main()
{
    FILE *file = fopen("inUnAdjMat.dat", "r");
    if (!file)
    {
        fprintf(stderr, "Error opening file 'inUnAdjMat.dat'\n");
        return 1;
    }

    int numVertices;
    fscanf(file, "%d", &numVertices);

    Graph *graph = createGraph(numVertices);

    for (int i = 0; i < numVertices; ++i)
    {
        for (int j = 0; j < numVertices; ++j)
        {
            fscanf(file, "%d", &graph->vertices[i][j]);
        }
    }

    fclose(file);

    int startVertex;
    printf("Enter the Starting Vertex: ");
    scanf("%d", &startVertex);

    primMST(graph, startVertex - 1);

    return 0;
}
