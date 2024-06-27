#include <stdio.h>
#include <stdlib.h>

// Linked List Node
struct LL_Node
{
    int data;
    struct LL_Node* next;
};

// Tree Node
struct Tree_Node
{
    int data;
    struct Tree_Node* left;
    struct Tree_Node* right;
};

// Function to insert nodes at the beginning of the Linked List
void push_to_LL(struct LL_Node** head, int new_data)
{
    struct LL_Node* new_node = (struct LL_Node*)malloc(sizeof(struct LL_Node));
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

// Function to perform inorder traversal of the created tree
void inorder_traversal(struct Tree_Node* root)
{
    if (root)
    {
        inorder_traversal(root->left);
        printf("%d ", root->data);
        inorder_traversal(root->right);
    }
}

// Function to reverse Linked List
void reverse_LL(struct LL_Node** head)
{
    struct LL_Node* prev = NULL;
    struct LL_Node* cur = *head;
    struct LL_Node* nxt;
    while (cur != NULL)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *head = prev;
}

// Function to convert the Linked List to Binary Tree
void convert_LL_to_BinaryTree(struct LL_Node* head, struct Tree_Node** root)
{
    if (head == NULL)
        return;
    
    // Create an empty queue
    struct Tree_Node* q[1000]; // Assuming a maximum of 1000 nodes in the tree
    int front = -1, rear = -1;
    
    struct LL_Node* curr = head;
    
    // Create root of the tree
    *root = (struct Tree_Node*)malloc(sizeof(struct Tree_Node));
    (*root)->data = curr->data;
    (*root)->left = NULL;
    (*root)->right = NULL;
    
    // Add root to the queue
    q[++rear] = *root;
    
    // Until the linked list is empty, run the while loop
    while (curr->next != NULL)
    {
        struct Tree_Node* temp = q[++front];
        
        if (curr->next != NULL)
        {
            curr = curr->next;
            
            // Insert left child of tree
            temp->left = (struct Tree_Node*)malloc(sizeof(struct Tree_Node));
            temp->left->data = curr->data;
            temp->left->left = NULL;
            temp->left->right = NULL;
            
            // Add it to the queue
            q[++rear] = temp->left;
        }
        
        if (curr->next != NULL)
        {
            curr = curr->next;
            
            // Insert right child of tree
            temp->right = (struct Tree_Node*)malloc(sizeof(struct Tree_Node));
            temp->right->data = curr->data;
            temp->right->left = NULL;
            temp->right->right = NULL;
            
            // Add it to the queue
            q[++rear] = temp->right;
        }
    }
}

int main()
{
    struct LL_Node* head = NULL;
    push_to_LL(&head, 1);
    push_to_LL(&head, 2);
    push_to_LL(&head, 3);
    push_to_LL(&head, 4);
    push_to_LL(&head, 5);
    push_to_LL(&head, 6);
    
    // Reverse the Linked List
    reverse_LL(&head);
    
    struct Tree_Node* root = NULL;
    
    // Construct the Binary Tree
    printf("The inorder traversal of the binary tree is:\n");
    convert_LL_to_BinaryTree(head, &root);
    inorder_traversal(root);
    
    return 0;
}
