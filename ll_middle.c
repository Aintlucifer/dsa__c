#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* insert_at_beg(int inf, struct Node** head)
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
struct Node* insert(int inf, struct Node** head,int pos)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = inf;
    struct Node*q = (*head);
    int i;
    if (*head == NULL)
    {
        temp1->next = NULL;
        *head = temp1;
    }
    else
    {
        for(i=1;i<pos-1;i++)
        {
            q=q->next;
        }
        temp1->next=q->next;
        q->next=temp1;
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
    int num,pos;
    temp->next = NULL;
    temp->data = 10;
    insert_at_beg(20,&head);
    insert_at_beg(30,&head);
    insert_at_beg(40,&head);
    printf("Linked List after initialization:\n");
    display(head);
    while(12)
    {   
        printf("Enter the no.s you want to insert and position, press -1 to exit\n");
        scanf("%d",&num);
        if(num==-1)
        {
            break;
        }
        scanf("%d",&pos);
        insert(num,&head,pos);
        
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
