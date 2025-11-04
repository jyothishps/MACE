#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], front = -1, rear = -1;

// Function to add a vertex to the queue
void enqueue(int vertex) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1)
            front = 0;
        queue[++rear] = vertex;
    }
}

// Function to remove a vertex from the queue
int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    else
        return queue[front++];
}

// Function to perform BFS
void BFS(int adj[MAX][MAX], int n, int start) {
    int visited[MAX] = {0};
    int i, current;

    enqueue(start);
    visited[start] = 1;

    printf("Breadth First Search starting from vertex %d: ", start);

    while ((current = dequeue()) != -1) {
        printf("%d ", current);

        for (i = 0; i < n; i++) {
            if (adj[current][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    int adj[MAX][MAX];
    int n, i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter the starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    BFS(adj, n, start);

    return 0;
}
