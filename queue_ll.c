#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* insert(int inf, struct Node** head)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = inf;
    
    if (*head == NULL)
    {
        temp1->next = NULL;
        *head = temp1;
    }
    else
    {
        temp1->next = (*head);
        (*head)=temp1;
    }
    return (*head);
}
void display(struct Node* head)
{
    struct Node* curr = head;
    while (curr != NULL) 
    {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* head = temp;
    int num;
    temp->next = NULL;
    temp->data = 10;
    printf("Linked List after initialization:\n");
    display(head);
    printf("Enter the no.s you want to insert, press -1 to exit\n");
    while(12)
    {   
         scanf("%d",&num);
        if(num!=-1)
        {
           insert(num, &head);
        }
        else
        {
            break;
        }
    }
    printf("Linked List after insertion:\n");
    display(head);
    struct Node* c = head;
    while (c != NULL) 
    {
        struct Node* temp2 = c;
        c = c->next;
        free(temp2);
    }
    return 0;
}
