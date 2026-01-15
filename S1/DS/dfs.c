#include<stdio.h>
#define MAX 100

int visited[MAX];
int adj[MAX][MAX];
int n;

void DFS(int vertex) {
    int i;
    visited[vertex] = i;
    printf("%d ",vertex);
    for(i=1;i<=n;i++) {
        if(adj[vertex][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int i,j;
    int start;

    printf("Enter no. of vertices: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix (0 or 1):\n");
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&adj[i][j]);
        }
    }

    for(i=1;i<=n;i++)
        visited[i] = 0;

    printf("Enter starting vertex (1 - %d): ",n);
    scanf("%d",&start);

    printf("DFS Traversal starting from %d:\n",start);
    DFS(start);

    printf("\n");
    return 0;
}
