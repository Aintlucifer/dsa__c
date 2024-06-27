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
    printf("\nEnter u for initial vertex v for final vertex and weight of the corresponding edge:give 200 w for exit\n");
    for (i = 1; i <= f; i++) {
        scanf("%d %d %d", &u, &v, &w);
        if (w==200)
        {
            break;
        }
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

// Function for depth-first search traversal using stack
void DFS(int start) {
    int stack[10], top = -1, v, i;
    stack[++top] = start;
    while (top != -1) {
        v = stack[top--];
        if (!visited[v]) {
            visited[v] = 1;
            printf("%d ", v); // Print the visited node
            for (i = 10; i >=1; i--) { // Assuming the graph size is fixed at 10
                if (graph[v][i] && !visited[i]) {
                    stack[++top] = i;
                }
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
    printf("\nEnter the starting node for DFS traversal: ");
    scanf("%d", &start);
    printf("\nDFS Traversal starting from node %d: ", start);
    DFS(start);
    printf("\n\nPrim's Algorithm:\n");
    prims(num);
    return 0;
}

