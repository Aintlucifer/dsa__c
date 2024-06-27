#include <stdio.h>
#include <stdlib.h>

// Node structure for the Binary Search Tree
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node with given data
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node with given key into BST
struct TreeNode* insert(struct TreeNode* root, int key) {
    // If the tree is empty, return a new node
    if (root == NULL) {
        return createNode(key);
    }
    
    // Otherwise, recur down the tree
    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    // Return the unchanged node pointer
    return root;
}

// Function to perform in-order traversal of BST
void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to search a given key in BST
struct TreeNode* search(struct TreeNode* root, int key) {
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key) {
        return root;
    }

    // Key is greater than root's key
    if (root->data < key) {
        return search(root->right, key);
    }

    // Key is smaller than root's key
    return search(root->left, key);
}

// Function to find the node with minimum value in BST
struct TreeNode* minValueNode(struct TreeNode* node) {
    struct TreeNode* current = node;

    // Find the leftmost leaf node
    while (current && current->left != NULL) {
        current = current->left;
    }

    return current;
}

// Function to delete a node with given key from BST
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    // Base case: If the tree is empty
    if (root == NULL) {
        return root;
    }

    // Recur down the tree
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        struct TreeNode* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function to find the node with maximum value in BST
struct TreeNode* maxValueNode(struct TreeNode* node) {
    struct TreeNode* current = node;

    // Find the rightmost leaf node
    while (current && current->right != NULL) {
        current = current->right;
    }

    return current;
}

// Driver code
int main() {
    struct TreeNode* root = NULL;

    // Insert some nodes into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Print in-order traversal of the BST
    printf("In-order traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    // Search for a key in the BST
    int keyToSearch = 40;
    struct TreeNode* result = search(root, keyToSearch);
    if (result != NULL) {
        printf("Key %d found in the BST\n", keyToSearch);
    } else {
        printf("Key %d not found in the BST\n", keyToSearch);
    }

    // Delete a node from the BST
    int keyToDelete = 30;
    root = deleteNode(root, keyToDelete);
    printf("In-order traversal after deleting %d: ", keyToDelete);
    inorderTraversal(root);
    printf("\n");

    // Find the minimum and maximum values in the BST
    struct TreeNode* minNode = minValueNode(root);
    struct TreeNode* maxNode = maxValueNode(root);
    printf("Minimum value in the BST: %d\n", minNode->data);
    printf("Maximum value in the BST: %d\n", maxNode->data);

    return 0;
}
