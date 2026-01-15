#include<stdio.h>
#define INF 9999
#define MAX 20

int main() {
    int cost[MAX][MAX],t[MAX][2],near[MAX];
    int n,i,j,k,l,mincost = 0;
    printf("Enter no. of vertices:");
    scanf("%d",&n);
    printf("Enter cost adjacency matrix:\n  ");
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            printf("cost[%d][%d]:",i,j);
            scanf("%d",&cost[i][j]);

            if(i == j || cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    // Find the min edge
    int min = INF;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(cost[i][j] < min) {
                min = cost[i][j];
                k = i;
                l = j;
            }
        }
    }

    // Add edge to t
    t[1][1] = k;
    t[1][2] = l;
    mincost = cost[k][l];

    // Initialize near[]
    for(i=1;i<=n;i++) {
        if(cost[i][k] < cost[i][l])
            near[i] = k;
        else    
            near[i] = l;
    }
    near[k] = near[l] = 0;

    // Find n-2 additional edges for t
    for(i=2;i<=n-1;i++) {
        int jmin,minval = INF;
        for(j=1;j<=n;j++) {
            if(near[j]!=0 && cost[j][near[j]] < minval) {
                jmin = j;
                minval = cost[j][near[j]];
            }
        }
        // add edge
        t[i][1] = jmin;
        t[i][2] = near[jmin];
        mincost+=cost[jmin][near[jmin]];
        near[jmin] = 0;

        // Update near
        for(k=1;k<=n;k++) {
            if(near[k]!=0 && cost[k][near[k]] > cost[k][jmin]) 
                near[k] = jmin;
        }
    }

    // Minimum Cost Spanning Tree
    printf("\nEdges in minimum cost spanning tree\n");
    for(i=1;i<=n-1;i++) {
        printf("%d - %d = %d\n",t[i][1],t[i][2],cost[t[i][1]][t[i][2]]);
    }
    printf("Minimum Cost = %d",mincost);
    return 0;
}