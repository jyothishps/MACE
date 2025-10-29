#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev,*next;
}list;

list *start = NULL, *last = NULL;

node* createNode(int value) {
    node *newNode = (list *) malloc (sizeof(list));
    node->data = value;
    node->prev = NULL;
    node->next = NULL;
    return newNode;
}

void insertAtBeg(int value) {
    list *newNode = createNode(value);
    newNode->data = value;
    if(start==NULL)
        start = last = newNode;
    else {
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
    }
    printf("%d is inserted at beginning\n",newNode->data);
}

void insertAtEnd(int value) {
    list *newNode = createNode(value);
    newNode->data = value;
    if(last==NULL) 
        start = last == newNode;
    else {
        newNode->prev = last;
        last->next = newNode;
        last = newNode;
    }
    printf("%d is inserted at end\n",newNode->data);
}

void deleteFromBeg() {
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    list *temp = start;
    printf("%d is deleted from beginning\n",temp->data);
    start = start->next;
    if(start != NULL)
        start->prev = NULL;
    else
        last = NULL;
    free(temp);
}

void deleteFromEnd() {
    if(last == NULL) {
        printf("List is empty"\n);
        return;
    }
    list *temp = last;
    printf("%d is deleted from end\n",temp->data);
    last = last->prev;
    if(last!=NULL) 
        last->next = NULL;
    else    
        start = NULL;
    free(temp);
}

int main() {
    int ch,value;
    while(1) {
        printf("\n---DLL Operations---\n");
        printf("1. Insertion at begining\n2. Insertion at End\n3. Deletion at beg\n4. \n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                root = createTree();
                break;
            case 2:
                inorder(root);
                break;
            case 3:
                preorder(root);
                break;
            case 4:
                postorder(root);
                break;
            case 5:
                exit(0);
        }
    }
    return 0;
}