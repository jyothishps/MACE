#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}list;

list *top = NULL;

void create() {
    top = NULL;
    printf("Stack is created (empty)\n");
}

void push(int value) {
    list *newNode = (list *) malloc (sizeof(list));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d is pushed\n",newNode->data);
}

void pop() {
    if(top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    list *temp = top;
    printf("%d is popped\n",top->data);
    top = top->next;
    free(temp);
}

void display() {
    if(top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    list *temp = top;
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int ch,value;
    while(1) {
        printf("\n---Linked Stack---\n");
        printf("1. Create\n2. Push\n3. Pop\n4. Display\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                create();
                break;
            case 2:
                printf("Enter value:");
                scanf("%d",&value);
                push(value);
                break;
            case 3:
                pop();
                break;
            case 4:
                printf("Stack:\n");
                display();
                break;
            case 5:
                printf("Exiting.....\n");
                exit(0);
        }
    }
    return 0;
}