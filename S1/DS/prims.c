#include <stdio.h>
#define INF 9999
#define MAX 10

int main() {
    int cost[MAX][MAX], t[MAX][2], near[MAX];
    int n, i, j, k, l, min, mincost = 0;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("cost[%d][%d]=",i,j);
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF; // no edge = infinity
        }
    }

    // Step 1: Find the edge (k, l) with minimum cost
    min = INF;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (cost[i][j] < min) {
                min = cost[i][j];
                k = i;
                l = j;
            }
        }
    }

    // Add the first edge to t
    t[1][1] = k;
    t[1][2] = l;
    mincost = cost[k][l];

    // Initialize near[]
    for (i = 1; i <= n; i++) {
        if (cost[i][k] < cost[i][l])
            near[i] = k;
        else
            near[i] = l;
    }
    near[k] = near[l] = 0; // mark included vertices

    // Step 2: Find remaining n-2 edges
    for (i = 2; i <= n - 1; i++) {
        int jmin, minval = INF;

        // Find the vertex j not in MST with smallest cost[j][near[j]]
        for (j = 1; j <= n; j++) {
            if (near[j] != 0 && cost[j][near[j]] < minval) {
                minval = cost[j][near[j]];
                jmin = j;
            }
        }

        // Add this edge to t
        t[i][1] = jmin;
        t[i][2] = near[jmin];
        mincost += cost[jmin][near[jmin]];
        near[jmin] = 0; // mark as included

        // Update near[]
        for (k = 1; k <= n; k++) {
            if (near[k] != 0 && cost[k][near[k]] > cost[k][jmin])
                near[k] = jmin;
        }
    }

    // Output MST edges and cost
    printf("\nEdges in the Minimum Spanning Tree:\n");
    for (i = 1; i <= n - 1; i++)
        printf("Edge %d: (%d -> %d) cost: %d\n", i, t[i][1], t[i][2], cost[t[i][1]][t[i][2]]);

    printf("\nTotal Minimum Cost = %d\n", mincost);
    return 0;
}
