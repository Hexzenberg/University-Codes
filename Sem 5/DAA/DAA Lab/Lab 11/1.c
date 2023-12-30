#include <stdio.h>
#include <limits.h>

#define MAX_VERTICES 100

void floydWarshall(int graph[MAX_VERTICES][MAX_VERTICES], int V, int path[MAX_VERTICES][MAX_VERTICES]);

void printSolution(int dist[MAX_VERTICES][MAX_VERTICES], int path[MAX_VERTICES][MAX_VERTICES], int src, int dest);

int main()
{
    int V;

    // Input number of vertices (V)
    printf("Enter the Number of Vertices: ");
    scanf("%d", &V);

    int graph[MAX_VERTICES][MAX_VERTICES];

    // Input cost adjacency matrix from the file
    FILE *file = fopen("inDiAdjMat2.dat", "r");
    if (!file)
    {
        fprintf(stderr, "Error opening file inDiAdjMat2.dat\n");
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

    int path[MAX_VERTICES][MAX_VERTICES];

    // Apply Floyd-Warshall algorithm
    floydWarshall(graph, V, path);

    // Input source and destination vertices
    int src, dest;
    printf("Enter the source and destination vertex: ");
    scanf("%d %d", &src, &dest);
    src--;
    dest--;

    // Print the solution
    printSolution(graph, path, src, dest);

    return 0;
}

void floydWarshall(int graph[MAX_VERTICES][MAX_VERTICES], int V, int path[MAX_VERTICES][MAX_VERTICES])
{
    int dist[MAX_VERTICES][MAX_VERTICES];

    // Initialize the distance matrix and path matrix
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            dist[i][j] = graph[i][j];
            if (graph[i][j] != INT_MAX)
            {
                path[i][j] = i;
            }
            else
            {
                path[i][j] = -1; // No intermediate vertex
            }
        }
    }

    // Update dist[] using all vertices as intermediates
    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j] = k;
                }
            }
        }
    }

    // Update the graph with the final distances
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            graph[i][j] = dist[i][j];
        }
    }
}

void printSolution(int dist[MAX_VERTICES][MAX_VERTICES], int path[MAX_VERTICES][MAX_VERTICES], int src, int dest)
{
    printf("Shortest Path from vertex %d to vertex %d: ", src + 1, dest + 1);

    if (dist[src][dest] == INT_MAX)
    {
        printf("No path exists\n");
        return;
    }

    int intermediate = path[src][dest];

    if (intermediate == -1)
    {
        printf("%d", src + 1);
    }
    else
    {
        printf("%d-->", src + 1);
        while (intermediate != dest)
        {
            printf("%d-->", intermediate + 1);
            intermediate = path[intermediate][dest];
        }
        printf("%d", dest + 1);
    }

    printf("\nPath weight: %d\n", dist[src][dest]);
}
