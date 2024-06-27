#include <stdio.h>
#include <stdlib.h>

#define INF 9999

void dik(int graph[10][10], int n, int start) {
    int cost[10][10], distance[10], pred[10], visited[10];
    int count, mindistance, nextnode, i, j;

    // Initialize cost matrix
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (graph[i][j] == 0) {
                cost[i][j] = INF;
            } else {
                cost[i][j] = graph[i][j];
            }
        }
    }

    // Initialize distance, pred, and visited arrays
    for (i = 1; i <= n; i++) {
        distance[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;
    }

    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while (count < n) {
        mindistance = INF;
        nextnode = -1;

        // Find the next node with the minimum distance
        for (i = 1; i <= n; i++) {
            if (distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }
        }

        if (nextnode == -1) {
            break; // No more nodes to visit
        }

        visited[nextnode] = 1;

        // Update the distances
        for (i = 1; i <= n; i++) {
            if (!visited[i]) {
                if (mindistance + cost[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
            }
        }
        count++;
    }

    // Print the distances
    for (i = 1; i <= n; i++) {
        if (i != start) {
            if (distance[i] == INF) {
                printf("\nDistance from source to %d is infinite", i);
            } else {
                printf("\nDistance from source to %d is %d", i, distance[i]);
            }
        }
    }
}

int main() {
    int n, u, v, w, y;
    int graph[10][10] = {0}; // Initialize the graph array to zero

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter edges (u, v) and weight (w) (enter -1 -1 -1 to stop):\n");
    while (1) {
        scanf("%d %d %d", &u, &v, &w);
        if (u == -1 && v == -1 && w == -1) {
            break;
        }
        graph[u][v] = w;
        graph[v][u] = w;
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &y);

    dik(graph, n, y);

    return 0;
}

