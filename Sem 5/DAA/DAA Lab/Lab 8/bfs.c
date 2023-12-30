#include <stdio.h>
#define max 100

typedef struct vertices
{
    int status, level, name, parent;
} vertices;

typedef struct graph
{
    vertices vertex[max];
    int n;
} graph;

typedef struct queue
{
    vertices data[max];
    int front, rear;
} queue;

void insert(queue *q, vertices a)
{
    if (q->rear == max - 1)
        return;
    if (q->front == -1)
        q->front++;
    q->data[++q->rear] = a;
}

vertices delete(queue *q)
{
    vertices a;
    a.status = -1;
    if (q->front != -1 && q->front <= q->rear)
    {
        a = q->data[q->front++];
        if (q->front > q->rear)
            q->front = q->rear = -1;
    }
    return a;
}

void bfs(graph *g, int n, int m, int adj[][n], int a, queue *q)
{
    g->vertex[a - 1].level = 0;
    g->vertex[a - 1].status = 1;
    insert(q, g->vertex[a - 1]);
    while (q->front <= q->rear)
    {
        vertices u = delete (q);
        if (u.status == -1) // Check if u is a valid vertex as -1 means empty queue
            break;
        for (int i = 0; i < n; i++)
        {
            if (adj[u.name - 1][i] == 1 && g->vertex[i].status == 0)
            {
                g->vertex[i].level = u.level + 1;
                g->vertex[i].status = 1;
                g->vertex[i].parent = u.name;
                insert(q, g->vertex[i]);
            }
        }
        g->vertex[u.name - 1].status = 2;
        printf("%d ", u.name);
    }
}

void distance(graph g, int a)
{
    for (int i = 0; i < g.n; i++)
    {
        if (i == a - 1)
            continue; // no need to print the distance of the starting node from the itself
        int d = g.vertex[i].level * 2;
        printf(i == g.n - 1 ? "%d" : "%d ", d > 0 ? d : -1);
    }
}

int main()
{
    int n, m, a, b;
    printf("Enter the number of nodes and edges:\n");
    scanf("%d %d", &n, &m);
    int adj[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;
    queue q;
    q.front = q.rear = -1; // initialising the queue
    graph g;
    g.n = n;
    for (int i = 0; i < n; i++) // initialising the graph
    {
        g.vertex[i].name = i + 1;
        g.vertex[i].parent = g.vertex[i].level = -1;
        g.vertex[i].status = 0;
    }
    printf("Enter the nodes which have an edge between them:\n");
    for (int i = 0; i < m; i++) // making the adjacent matrix
    {
        scanf("%d %d", &a, &b);
        adj[a - 1][b - 1] = 1;
        adj[b - 1][a - 1] = 1;
    }
    printf("Enter the vertex to start from:\n");
    scanf("%d", &a);
    printf("BFS Traversal: ");
    bfs(&g, n, m, adj, a, &q);
    printf("\nDistance: [");
    distance(g, a);
    printf("]");
    return 0;
}
