#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
} Node;

Node* createNode(int value) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node *root, int value) {
    if (root == NULL) 
        return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    return root;
}

Node* findMin(Node *root) {
    while (root && root->left != NULL)
        root = root->left;
    return root;
}

Node* deleteNode(Node *root, int value) {
    if (root == NULL)
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

Node* search(Node* root, int value) {
    if (root == NULL || root->data == value)
        return root;
    if (value < root->data)
        return search(root->left, value);
    else
        return search(root->right, value);
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    Node *min,*found, *root = NULL;
    int ch, val;
    while(1) {
        printf("\n---BST OPERATIONS---\n");
        printf("1. Insert a node\n2. Delete a node\n3. Inorder Traversal\n4. Preorder Traversal\n5. Postorder Traversal\n6. Find a node\n7. Minimum node\n8. Exit\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                printf("Enter a value to insert:");
                scanf("%d",&val);
                root = insert(root,val);
                break;
            case 2:
                printf("Enter a value to delete:");
                scanf("%d",&val);
                root = deleteNode(root,val);
                break;
            case 3:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 4:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 5:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 6:
                printf("Enter value to search:");
                scanf("%d",&val);
                found = search(root,val);
                if(found)
                    printf("%d is present in the BST\n",val);
                else
                    printf("%d is not present\n",val);
                break;
            case 7:
                if(root == NULL) {
                    printf("Tree is empty\n");
                }
                else {
                    min = findMin(root);
                    printf("Minimum value:%d",min->data);
                }
                break;
            case 8:
                printf("Exiting.....\n");
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
