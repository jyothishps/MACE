#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void createSet(int set[],int n) {
    int element;
    for(int i=0;i<n;i++) {
        scanf("%d",&element);
        if(element > 0 && element < SIZE)
            set[element]=1;
    }
}

void displaySet(int set[],int n) {
    printf("{");
    for(int i=0;i<n;i++) {
        if(set[i]==1)
            printf(" %d ",i);
    }
    printf("}\n");
}

void unionSet(int A[],int B[],int result[],int n) {
    for(int i=0;i<n;i++) {
        result[i] = A[i] | B[i]; 
    }
}

void intersectionSet(int A[],int B[],int result[],int n) {
    for(int i=0;i<n;i++) {
        result[i] = A[i] & B[i];
    }
}

void differenceSet(int A[],int B[],int result[],int n) {
    for(int i=0;i<n;i++) {
        result[i] = A[i] & (~B[i]);
    }
}

int main() {
    int A[SIZE]={0},B[SIZE]={0},result[SIZE];
    int n,ch;
    printf("\nUniversal Set = { 0, 1, 2, 3, 4,......, %d }\n",SIZE-1);
    
    printf("\nEnter no. of elements of SET A:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    createSet(A,n);

    printf("\nEnter no. of elements of SET B:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    createSet(B,n);

    printf("Set A:");
    displaySet(A,SIZE);
    printf("Set B:");
    displaySet(B,SIZE);

    while(1) {
        printf("\n---Set Operations Menu---\n");
        printf("1. A u B\n2. A n B\n3. A-B\n4. B-A\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                unionSet(A,B,result,SIZE);
                printf("\nA u B: ");
                displaySet(result,SIZE);
                break;
            case 2:
                intersectionSet(A,B,result,SIZE);
                printf("\nA n B: ");
                displaySet(result,SIZE);
                break;
            case 3:
                differenceSet(A,B,result,SIZE);
                printf("\nA-B: ");
                displaySet(result,SIZE);
                break;
            case 4:
                differenceSet(B,A,result,SIZE);
                printf("\nB-A: ");
                displaySet(result,SIZE);
                break;
            case 5:
                printf("Exiting.........\n");
                exit(0);
            default:
                printf("Invalid");
        }
    }
    return 0;
}

