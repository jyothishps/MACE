#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// -------- Global Variables --------
typedef struct {
    int src, dest, weight;
} Edge;

Edge heap[MAX];     // Declare before using in functions
int heapSize = 0;
int parent[MAX];    // For Disjoint Set (Union-Find)

// -------- Disjoint Set (Union-Find) --------
int find(int i) {
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}

void unionSet(int a, int b) {
    int pa = find(a);
    int pb = find(b);
    parent[pb] = pa;
}

// --------Heap Operations--------
void swap(Edge *a, Edge *b) {
    Edge temp = *a; *a = *b; *b = temp;
}

void insertHeap(Edge e) {
    heap[heapSize] = e;
    int i = heapSize++;
    while (i > 0 && heap[(i - 1) / 2].weight > heap[i].weight) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

Edge extractMin() {
    Edge root = heap[0];
    heap[0] = heap[--heapSize];
    int i = 0;
    while (1) {
        int left = 2 * i + 1, right = 2 * i + 2, smallest = i;
        if (left < heapSize && heap[left].weight < heap[smallest].weight)
            smallest = left;
        if (right < heapSize && heap[right].weight < heap[smallest].weight)
            smallest = right;
        if (smallest == i) break;
        swap(&heap[i], &heap[smallest]);
        i = smallest;
    }
    return root;
}

// --------Kruskal’s Algorithm--------
int main() {
    int V, E;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &V, &E);

    printf("Enter edges (src dest weight):\n");
    for (int i = 0; i < E; i++) {
        Edge e;
        scanf("%d %d %d", &e.src, &e.dest, &e.weight);
        insertHeap(e);  // Insert edge into heap
    }

    // Initialize disjoint sets
    for (int i = 0; i < V; i++)
        parent[i] = i;

    printf("\nEdges in the Minimum Spanning Tree:\n");
    int totalWeight = 0, count = 0;

    while (heapSize > 0 && count < V - 1) {
        Edge e = extractMin();

        int u = e.src;
        int v = e.dest;

        int pu = find(u);
        int pv = find(v);

        if (pu != pv) {
            printf("%d -- %d == %d\n", u, v, e.weight);
            totalWeight += e.weight;
            unionSet(pu, pv);
            count++;
        }
    }

    printf("Total weight of MST: %d\n", totalWeight);
    return 0;
}
