#include<stdio.h>
#include<stdlib.h>

struct NODE
{
    int data;
    struct NODE* next;
};

struct NODE* insert(struct NODE* head, int data1)
{
    struct NODE* temp1 = (struct NODE*)malloc(sizeof(struct NODE));
    temp1->next = head;
    temp1->data = data1;
    head = temp1;
    return head;
}

void display(struct NODE* head)
{
    struct NODE* curr = head;
    while (curr != NULL)
    {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

struct NODE* deleteNode(struct NODE* head)
{
    if (head == NULL)
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return head;
    }
    
    struct NODE* curr = head;
    head = head->next;
    free(curr);
    return head;
}

int main()
{
    struct NODE* temp = (struct NODE*)malloc(sizeof(struct NODE));
    struct NODE* head = temp;
    temp->next = NULL;
    while (1)
    {
        char ch;
        int inf;
        printf("ENTER 1 to enqueue, 2 to dequeue, 3 to display, 4 to exit\n");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '1':
            printf("ENTER THE NO. YOU WANT TO INSERT: ");
            scanf("%d", &inf);
            head = insert(head, inf);
            break;
        case '2':
            head = deleteNode(head);
            break;
        case '3':
            display(head);
            break;
        case '4':
            exit(0);
        default:
            printf("Wrong input. Please enter a valid option.\n");
        }
    }
    return 0;
}
