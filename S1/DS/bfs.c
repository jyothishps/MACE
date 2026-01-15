#include <stdio.h>
#define MAX 100

int queue[MAX], front = -1, rear = -1;
int visited[MAX];
int adj[MAX][MAX];
int n;

/* Enqueue */
void enqueue(int vertex) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = rear = 0;
    else
        rear++;
    queue[rear] = vertex;
}

/* Dequeue */
int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

/* BFS Function */
void BFS(int vertex) {
    int current;

    enqueue(vertex);
    visited[vertex] = 1;

    while ((current = dequeue()) != -1) {
        printf("%d ", current);
        for (int i = 1; i <= n; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int start;

    printf("Enter no. of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    /* Print adjacency matrix */
    printf("\nAdjacency Matrix:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d\t", adj[i][j]);
        }
        printf("\n");
    }

    /* Remove self-loops */
    for (int i = 1; i <= n; i++)
        adj[i][i] = 0;

    /* Print matrix without loops */
    printf("\nAdjacency Matrix with no loops:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d\t", adj[i][j]);
        }
        printf("\n");
    }

    /* Initialize visited */
    for (int i = 1; i <= n; i++)
        visited[i] = 0;

    printf("\nEnter starting vertex (1-%d): ", n);
    scanf("%d", &start);

    printf("BFS starting from %d: ", start);
    BFS(start);

    return 0;
}
