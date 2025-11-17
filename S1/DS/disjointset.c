#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int parent[MAX];
int rank[MAX];
int n = 0;

// Create: Initialize each element to be its own parent (makeset)
void makeSet(int size) {
    n = size;
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
    printf("Disjoint set created with %d elements.\n", n);
}

// Find: Find the representative (root) of the set containing element x
int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);  // Path compression
    }
    return parent[x];
}

// Union: Combine two sets containing elements x and y
void unionSets(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);

    if (rootX != rootY) {
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        printf("Union done between %d and %d.\n", x, y);
    } else {
        printf("%d and %d are already in the same set.\n", x, y);
    }
}

int main() {
    int choice, x, y;

    while (1) {
        printf("\n--- Disjoint Set Menu ---\n");
        printf("1. Create Set\n");
        printf("2. Union Sets\n");
        printf("3. Find Representative\n");
        printf("4. Check if Two Elements are in Same Set\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of elements (max %d): ", MAX);
                scanf("%d", &n);
                if (n > 0 && n <= MAX) {
                    makeSet(n);
                } else {
                    printf("Invalid size.\n");
                }
                break;

            case 2:
                if (n == 0) {
                    printf("Set not created yet. Please create a set first.\n");
                    break;
                }
                printf("Enter two elements to union (x y): ");
                scanf("%d %d", &x, &y);
                if (x >= 0 && x < n && y >= 0 && y < n) {
                    unionSets(x, y);
                } else {
                    printf("Invalid elements.\n");
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Set not created yet. Please create a set first.\n");
                    break;
                }
                printf("Enter element to find representative: ");
                scanf("%d", &x);
                if (x >= 0 && x < n) {
                    printf("Representative of %d is %d.\n", x, find(x));
                } else {
                    printf("Invalid element.\n");
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Set not created yet. Please create a set first.\n");
                    break;
                }
                printf("Enter two elements to check (x y): ");
                scanf("%d %d", &x, &y);
                if (x >= 0 && x < n && y >= 0 && y < n) {
                    if (find(x) == find(y)) {
                        printf("%d and %d are in the same set.\n", x, y);
                    } else {
                        printf("%d and %d are in different sets.\n", x, y);
                    }
                } else {
                    printf("Invalid elements.\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
