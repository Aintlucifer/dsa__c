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
    temp1->data=inf;
    temp1->next=(*head);
    (*head)=temp1;
    return temp1;
}
struct Node* insert_at_END(int inf, struct Node** head)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data=inf;
    struct Node* q = (*head);
    while(q->next!=NULL)
    {
       q=q->next;
    }
    q->next=temp1;
    temp1->next=NULL;
    return temp1;
}
struct Node* replace(int inf, int pos, struct Node** head)
{
    int i;
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data=inf;
     struct Node* q= (*head);
    for(i=1;i<pos;i++)
    {
        q=q->next;
    }
    temp1->next=q->next->next;
    q->next=temp1;
    return temp1;
}
struct Node* iNSERT_at_MIDDLE(int inf, int pos, struct Node** head)
{
    int i;
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data=inf;
     struct Node* q= (*head);
    for(i=1;i<pos-1;i++)
    {
        q=q->next;
    }
    temp1->next=q->next;
    q->next=temp1;
    return temp1;
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
    temp->next = NULL;
    temp->data = 10;
    printf("Linked List after initialization:\n");
    display(head);
    insert(20, &head);
    insert(30, &head);
    insert(40, &head);
    insert_at_END(50, &head);
    insert_at_END(60, &head);
    iNSERT_at_MIDDLE(105, 4, &head);
    printf("Linked List after insertion:\n");
    display(head);
    struct Node* curr = head;
    while (curr != NULL) {
        struct Node* temp = curr;
        curr = curr->next;
        free(temp);
    }

    return 0;
}
