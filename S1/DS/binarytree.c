// Program to create, insert, delete and traverse a binary tree

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} node;

node *root = NULL;

/* Create new node */
node* createNode(int val)
{
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/* Interactive tree creation */
node* createTree()
{
    int val, choice;

    printf("Enter node value: ");
    scanf("%d", &val);

    node *newNode = createNode(val);

    printf("Do %d have left node (yes-1,no-0): ", val);
    scanf("%d", &choice);

    if (choice == 1)
        newNode->left = createTree();

    printf("Do %d have right node (yes-1,no-0): ", val);
    scanf("%d", &choice);

    if (choice == 1)
        newNode->right = createTree();

    return newNode;
}

/* Insert node manually */
void insertNode(node *root, int val)
{
    int choice;
    printf("Do %d have left node (yes-1,no-0): ", root->data);
    scanf("%d", &choice);

    if (choice == 0 && root->left == NULL)
    {
        root->left = createNode(val);
        return;
    }
    else if (choice == 1 && root->left != NULL)
    {
        insertNode(root->left, val);
        return;
    }

    printf("Do %d have right node (yes-1,no-0): ", root->data);
    scanf("%d", &choice);

    if (choice == 0 && root->right == NULL)
    {
        root->right = createNode(val);
        return;
    }
    else if (choice == 1 && root->right != NULL)
    {
        insertNode(root->right, val);
        return;
    }
}

/* Delete node by value */
node* deleteNode(node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == val)
    {
        /* Case 1: Leaf node */
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        /* Case 2: Only left child */
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }

        /* Case 3: Only right child */
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }

        /* Case 4: Two children */
        node *temp = root->right;

        while (temp->left != NULL)
        {
            temp = temp->left;
        }

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);

        return root;
    }

    root->left = deleteNode(root->left, val);
    root->right = deleteNode(root->right, val);

    return root;
}

/* Inorder traversal */
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/* Preorder traversal */
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

/* Postorder traversal */
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    int ch, val;

    while (1)
    {
        printf("\nMenu\n");
        printf("1. Create\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Inorder\n");
        printf("5. Preorder\n");
        printf("6. Postorder\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                root = createTree();
                break;

            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insertNode(root, val);
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                root = deleteNode(root, val);
                break;

            case 4:
                printf("Inorder: ");
                inorder(root);
                printf("\n");
                break;

            case 5:
                printf("Preorder: ");
                preorder(root);
                printf("\n");
                break;

            case 6:
                printf("Postorder: ");
                postorder(root);
                printf("\n");
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}