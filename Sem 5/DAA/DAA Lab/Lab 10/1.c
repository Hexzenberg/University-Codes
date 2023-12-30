#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_VERTICES 100

// Structure to represent a vertex
typedef struct
{
    int cost;
    int path[MAX_VERTICES];
} Vertex;

// Function prototypes
int minDistance(int dist[], int sptSet[], int V);
void printSolution(int dist[], int n, int src, Vertex vertices[]);

// Dijkstra's algorithm to find the shortest paths from source to all vertices
void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int src, int V, Vertex vertices[])
{
    int dist[V];
    int sptSet[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, sptSet, V);
        sptSet[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
                vertices[v].cost = dist[v];
                vertices[v].path[v] = u + 1; // Store the predecessor information
            }
        }
    }

    printSolution(dist, V, src, vertices);
}

void printPath(int src, int dest, Vertex vertices[])
{
    if (src == dest)
    {
        printf("%d", src + 1);
        return;
    }

    int current = dest + 1;
    int path[MAX_VERTICES];
    int count = 0;

    while (current != src + 1)
    {
        if (count >= MAX_VERTICES)
        {
            fprintf(stderr, "Path is too long\n");
            exit(EXIT_FAILURE);
        }

        path[count++] = current;
        current = vertices[current - 1].path[current - 1];
    }

    printf("%d", src + 1);

    for (int j = count - 1; j >= 0; j--)
    {
        printf("->%d", path[j]);
    }
}

void printSolution(int dist[], int n, int src, Vertex vertices[])
{
    printf("Source\tDestination\tCost\tPath\n");

    for (int i = 0; i < n; i++)
    {
        if (dist[i] != INT_MAX)
        {
            printf("%d\t%d\t\t%d\t", src + 1, i + 1, dist[i]);

            if (src != i)
            {
                printPath(src, i, vertices);
            }
            else
            {
                printf("-");
            }

            printf("\n");
        }
        else
        {
            printf("%d\t%d\t\t%s\n", src + 1, i + 1, "Not reachable");
        }
    }
}

// A utility function to find the vertex with minimum distance value
int minDistance(int dist[], int sptSet[], int V)
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (sptSet[v] == 0 && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

int main()
{
    int V;

    // Input number of vertices (V)
    printf("Enter the Number of Vertices: ");
    scanf("%d", &V);

    int graph[MAX_VERTICES][MAX_VERTICES];

    // Input cost adjacency matrix from the file
    FILE *file = fopen("inDiAdjMat1.dat", "r");
    if (!file)
    {
        fprintf(stderr, "Error opening file inDiAdjMat1.dat\n");
        return 1;
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            fscanf(file, "%d", &graph[i][j]);
        }
    }

    fclose(file);

    // Input source vertex
    int src;
    printf("Enter the Source Vertex: ");
    scanf("%d", &src);
    src--;

    Vertex vertices[V];

    // Initialize vertices
    for (int i = 0; i < V; i++)
    {
        vertices[i].cost = INT_MAX;
        for (int j = 0; j < V; j++)
        {
            vertices[i].path[j] = 0;
        }
    }

    // Apply Dijkstra's algorithm
    dijkstra(graph, src, V, vertices);

    return 0;
}
