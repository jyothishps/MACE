#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}list;

list *start = NULL;

void createNode(int n) {
    list *temp = NULL;
    int i=0,value;
    while(i<n) {
        list *newNode = (list*) malloc (sizeof(list));
        printf("Node %d:",i+1);
        scanf("%d",&value);
        newNode->data = value;
        newNode->next = NULL;
        if(start == NULL)
            start = newNode;
        else
            temp->next = newNode;
        temp = newNode;
        i++;
    }
}

void insertAtBeg(int value) {
    list *newNode = (list*) malloc (sizeof(list));
    newNode->data = value;
    newNode->next = start;
    start = newNode;
}

void insertAtEnd(int value) {
    list *temp = start;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    list *newNode = (list*) malloc (sizeof(list));
    newNode->data = value;
    newNode->next = NULL;
    temp->next = newNode;
}

void insertAtPos(int value, int pos) {

    if (pos <= 0) {
        printf("Invalid position!\n");
        return;
    }

    // Insert at beginning
    if (pos == 1) {
        insertAtBeg(value);
        return;
    }

    // Traverse to node before the desired position
    list *temp = start;
    list *newNode = (list*) malloc(sizeof(list));
    newNode->data = value;
    int i = 1;
    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromBeg() {
    if(start == NULL) {
        printf("Linked List is empty\n");
        return;
    }

    list *temp = start;
    start = start->next;
    printf("%d is deleled\n",temp->data);
    free(temp);
}

void deleteFromEnd() {
    if (start == NULL) {
        printf("List is empty!\n");
        return;
    }

    list *temp = start, *prev = NULL;

    // If only one node
    if (start->next == NULL) {
        printf("%d is deleted\n", start->data);
        free(start);
        start = NULL;
        return;
    }

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("%d is deleted\n", temp->data);
    prev->next = NULL;
    free(temp);
}

void deleteFromPos(int pos) {
    if (start == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (pos <= 0) {
        printf("Invalid position!\n");
        return;
    }

    // Delete first node
    if (pos == 1) {
        deleteFromBeg(pos);
        return;
    }

    list *temp = start;
    list *prev = NULL;
    int i = 1;
    while (i < pos && temp != NULL) {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    prev->next = temp->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

void display() {
    list *temp = start;
    while(temp != NULL) { // Change condition to check for NULL directly
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf(" NULL\n");
}


int main() {
    int n,value,pos,ch;
    printf("Enter limit:");
    scanf("%d",&n);
    createNode(n);
    while(1) {
        printf("\n---Singly Linked List Operations---\n");
        printf("\n1. Insert at Beginning\n2. Insert at End\n3. Insert at specified position\n");
        printf("4. Delete from Beginning\n5. Delete from End\n6. Delete from specified position\n7. Display\n8. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                printf("Enter value:");
                scanf("%d",&value);
                insertAtBeg(value);
                break;
                break;
            case 2:
                printf("Enter value:");
                scanf("%d",&value);
                insertAtEnd(value);
                break;
            case 3:
                printf("Enter position:");
                scanf("%d",&pos);
                printf("Enter value:");
                scanf("%d",&value);
                insertAtPos(value,pos);
                break;
            case 4:
                deleteFromBeg();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                printf("Enter position:");
                scanf("%d",&pos);
                deleteFromPos(pos);
                break;
            case 7:
                display();
                break;
            case 8:    
                printf("Exiting.....\n");
                exit(0);
            default:
                printf("Wrong input\n");
        }
    }
    return 0; 
}