#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Function to perform Topological Sort
void topologicalSort(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
    int inDegree[MAX_VERTICES];
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;

    // Initialize in-degree array
    for (int i = 0; i < vertices; i++) {
        inDegree[i] = 0;
    }

    // Calculate in-degree of each vertex
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            if (graph[i][j] == 1) {
                inDegree[j]++;
            }
        }
    }

    // Add vertices with zero in-degree to the queue
    for (int i = 0; i < vertices; i++) {
        if (inDegree[i] == 0) {
            queue[rear++] = i;
        }
    }

    // Perform topological sorting
    int count = 0;
    printf("Topological Sort: ");
    while (front != rear) {
        int u = queue[front++];
        printf("%d ", u);
        count++;

        // Decrease the in-degree of the adjacent vertices
        for (int i = 0; i < vertices; i++) {
            if (graph[u][i] == 1) {
                inDegree[i]--;
                if (inDegree[i] == 0) {
                    queue[rear++] = i;
                }
            }
        }
    }

    // Check for a cycle (if there's a cycle, count won't be equal to the number of vertices)
    if (count != vertices) {
        printf("\nThere exists a cycle in the graph.\n");
    }
    printf("\n");
}

int main() {
    int vertices, edges;

    // Input number of vertices and edges
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter number of edges: ");
    scanf("%d", &edges);

    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    // Input edges (directed)
    printf("Enter edges (u v) where u -> v:\n");
    for (int i = 0; i < edges; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
    }

    // Call topological sort
    topologicalSort(graph, vertices);

    return 0;
}

