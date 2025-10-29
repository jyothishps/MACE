#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *left,*right;
}node;


node* createNode(int value) {
    node *newNode = (node *) malloc (sizeof(node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node* createTree() {
    int value;
    char ch;
    printf("Enter node value: ");
    scanf("%d", &value);

    node *newNode = createNode(value);

    printf("Does %d have a left child? (y/n): ", value);
    scanf(" %c", &ch);
    if(ch == 'Y' || ch == 'y')
        newNode->left = createTree();

    printf("Does %d have a right child? (y/n): ", value);
    scanf(" %c", &ch);
    if(ch == 'Y' || ch == 'y')
        newNode->right = createTree();

    return newNode;
}


void inorder(node *root) {
    if(root == NULL) // base case
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(node *root) {
    if(root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) {
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    int ch;
    node *root = NULL;
    while(1) {
        printf("\n---Binary Tree Operations---\n");
        printf("1. Create Tree\n2. Inorder\n3. Preorder\n4. Postorder\n5. Exit\n");
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