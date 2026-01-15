#include<stdio.h>
#define MAX 100

int visited[MAX];
int adj[MAX][MAX];
int n;

void display() {

}

void DFS(int vertex) {
    visited[vertex] = 1;
    printf("%d ",vertex);
    for(int i=1;i<=n;i++) {
        if(adj[vertex][i] == 1 && !visited[i])
            DFS(i);
    }
}

int main() {
    int start;
    printf("Enter no. of vertices:");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            scanf("%d",&adj[i][j]);
        }
    }

    // Adjacency matrix
    printf("Adjacency Matrix:\n");
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }

    for(int i=1;i<=n;i++)
        adj[i][i] = 0;

    printf("Adjacency Matrix with no loops:\n");
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }

    // initialize vertex[]

    for(int i=1;i<=n;i++)
        visited[i] = 0;
    
    printf("Enter starting vertex (1-%d):",n);
    scanf("%d",&start);
    printf("DFS starting from %d:",start);
    DFS(start);
    return 0;
}