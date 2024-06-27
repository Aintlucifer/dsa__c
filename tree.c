#include <stdio.h>
#include <stdlib.h>

// Structure describing a node of the tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new tree node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function for in-order traversal
void printInorder(struct Node* node) {
    if (node == NULL)
        return;

    // Traverse left subtree
    printInorder(node->left);

    // Visit node
    printf("%d ", node->data);

    // Traverse right subtree
    printInorder(node->right);
}

// Function for pre-order traversal
void printPreorder(struct Node* node) {
    if (node == NULL)
        return;

    // Visit node
    printf("%d ", node->data);

    // Traverse left subtree
    printPreorder(node->left);

    // Traverse right subtree
    printPreorder(node->right);
}

// Function for post-order traversal
void printPostorder(struct Node* node) {
    if (node == NULL)
        return;

    // Traverse left subtree
    printPostorder(node->left);

    // Traverse right subtree
    printPostorder(node->right);

    // Visit node
    printf("%d ", node->data);
}

// Function to find the height of the tree
int findHeight(struct Node* node) {
    if (node == NULL)
        return 0;

    int leftHeight = findHeight(node->left);
    int rightHeight = findHeight(node->right);

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

int main() {
    struct Node* root = NULL;
    int n, data;
    printf("Enter the number of elements in the tree: ");
    scanf("%d", &n);

    printf("Enter the tree elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        if (i == 0) {
            root = createNode(data);
        } else {
            // Insert elements into the tree
            struct Node* current = root;
            while (1) {
                if (data < current->data) {
                    if (current->left == NULL) {
                        current->left = createNode(data);
                        break;
                    } else {
                        current = current->left;
                    }
                } else {
                    if (current->right == NULL) {
                        current->right = createNode(data);
                        break;
                    } else {
                        current = current->right;
                    }
                }
            }
        }
    }

    printf("In-order Traversal: ");
    printInorder(root);
    printf("\n");

    printf("Pre-order Traversal: ");
    printPreorder(root);
    printf("\n");

    printf("Post-order Traversal: ");
    printPostorder(root);
    printf("\n");

    int height = findHeight(root);
    printf("Tree Height: %d\n", height);

    return 0;
}
