#include<stdio.h>
#include<conio.h>
#define MAX 25

int parent[MAX];

int find(int i) {
    while(parent[i]!=i)
        i = parent[i];
    return i;
}

void union_set(int i,int j) {
    parent[i] = j;
}

int main() {
    int i,j,u[MAX],v[MAX],w[MAX],e,n,mincost = 0;
    printf("Enter no. of vertices:");
    scanf("%d",&n);
    printf("Enter no. of edges:");
    scanf("%d",&e);
    // Enter all u v w
    printf("Enter src, dest, weight:\n");
    for(i=1;i<=e;i++) {
        printf("Enter s,d,w:");
        scanf("%d%d%d",&u[i],&v[i],&w[i]);
    }
    // Bubble sort edges based on weight
    for(i=1;i<=e-1;i++) {
        for(j=1;j<=e-i;j++) {
            if(w[j] > w[j+1]) {
                int temp;
                temp = w[j]; w[j] = w[j+1]; w[j+1] = temp;
                temp = u[j]; u[j] = u[j+1]; u[j+1] = temp;
                temp = v[j]; v[j] = v[j+1]; v[j+1] = temp;
            }
        }
    }
    // Initialize parent array
    for(i=1;i<=n;i++)
        parent[i] = i;

    int count = 0;
    i = 1;

    printf("MCST\n");

    while(i<=e && count<n-1) {
        int a = find(u[i]);
        int b = find(v[i]);
        if(a!=b) {
            printf("%d - %d : %d\n",u[i],v[i],w[i]);
            mincost+=w[i];
            count++;
            union_set(a,b);
        }
        i++;
    }
    printf("Minimum Cost: %d\n",mincost);

    return 0;
}
