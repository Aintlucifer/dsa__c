#include<stdio.h>

// Global variables
int visited[10] = {0};
int graph[10][10];
int min, mingraph = 0;

// Function to calculate factorial recursively
int rec(int num) {
    if ((num == 1) || (num == 0)) {
        return 1;
    } else {
        return num * rec(num - 1);
    }
}

// Function to input graph edges and weights
int input(int num) {
    int i, j, u, v, w;
    int f = rec(num) / (2 * rec(num - 2));
    printf("\nEnter u for initial vertex v for final vertex and weight of the corresponding edge:\n");
    for (i = 1; i <= f; i++) {
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w; // Assuming undirected graph
    }
    return 0;
}

// Function to display adjacency matrix
int display(int num) {
    int i, j;
    printf("\nThe adjacency matrix of the graph:\n\n");
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num; j++) {
            printf("%d\t", graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Function for breadth-first search traversal
void BFS(int start) {
    int queue[10], front = -1, rear = -1, i, v;
    visited[start] = 1;
    queue[++rear] = start;
    while (front != rear) {
        v = queue[++front];
        printf("%d ", v); // Print the visited node
        for (i = 1; i < 10; i++) { // Assuming the graph size is fixed at 10
            if (graph[v][i] && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

// Function for Prim's algorithm
void prims(int num) {
    int i, j, ne = 1, a, b, u, v;
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num; j++) {
            if (graph[i][j] == 0)
                graph[i][j] = 999;
        }
    }
    visited[1] = 1;
    while (ne < num) {
        for (i = 1, min = 999; i <= num; i++)
            for (j = 1; j <= num; j++)
                if (graph[i][j] < min)
                    if (visited[i] != 0) {
                        min = graph[i][j];
                        a = u = i;
                        b = v = j;
                    }
        printf("\n Edge %d:(%d - %d) weight: %d", ne++, a, b, min);
        mingraph = mingraph + min;
        visited[b] = 1;
        graph[a][b] = graph[b][a] = 999;
    }
    printf("\n\nMinimum spanning tree weight = %d\n", mingraph);
}

// Main function
int main() {
    int num, start;
    printf("\n\t\t\tPrim's Algorithm");
    printf("\n\nEnter the number of nodes: ");
    scanf("%d", &num);
    input(num);
    display(num);
    printf("\nEnter the starting node for BFS traversal: ");
    scanf("%d", &start);
    printf("\nBFS Traversal starting from node %d: ", start);
    BFS(start);
    printf("\n\nPrim's Algorithm:\n");
    prims(num);
    return 0;
}

