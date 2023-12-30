#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge
typedef struct
{
    int src, dest, weight;
} Edge;

// Structure to represent a subset for union-find
typedef struct
{
    int parent, rank;
} Subset;

// A utility function to find the subset of an element i
int find(Subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// A utility function to perform union of two subsets
void unionSets(Subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// A utility function to compare two edges based on their weights
int compareEdges(const void *a, const void *b)
{
    return ((Edge *)a)->weight - ((Edge *)b)->weight;
}

// The main function to construct MST using Kruskal's algorithm
void kruskalMST(Edge edges[], int V, int E)
{
    // Allocate memory for creating V subsets
    Subset *subsets = (Subset *)malloc(V * sizeof(Subset));

    // Create V subsets with single elements
    for (int i = 0; i < V; i++)
    {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }

    // Sort all edges in non-decreasing order of their weight
    qsort(edges, E, sizeof(Edge), compareEdges);

    printf("Edge\tCost\n");

    int i = 0; // An index variable, used for sorted edges
    int totalWeight = 0;

    // Number of edges to be taken is equal to V-1
    while (i < E && V - 1)
    {
        Edge nextEdge = edges[i++];

        int x = find(subsets, nextEdge.src);
        int y = find(subsets, nextEdge.dest);

        // If including this edge does not cause a cycle, include it in the result and increment the index
        if (x != y)
        {
            printf("%d--%d\t%d\n", nextEdge.src, nextEdge.dest, nextEdge.weight);
            totalWeight += nextEdge.weight;
            unionSets(subsets, x, y);
            V--;
        }
    }

    printf("Total Weight of the Spanning Tree: %d\n", totalWeight);

    // Free allocated memory
    free(subsets);
}

int main()
{
    int V, E;

    // Input number of nodes (V) and edges (E)
    scanf("%d %d", &V, &E);

    Edge edges[E];

    // Input edges (src, dest, weight)
    for (int i = 0; i < E; i++)
    {
        scanf("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    // Apply Kruskal's algorithm
    kruskalMST(edges, V, E);

    return 0;
}

// 1 2 4 1 8 8 2 3 8 2 8 11 3 4 7 3 6 4 3 9 2 4 5 9 4 6 14 5 6 10 6 7 2 7 8 1 7 9 6 8 9 7
