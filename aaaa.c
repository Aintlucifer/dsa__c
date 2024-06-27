#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* insert(struct Node *head,int inf)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=inf;
    if(head==NULL)
    {
        head=temp;
        temp->prev=NULL;
        temp->next=NULL;
    }
    else
    {
        temp->next=head;
        temp->prev=NULL;
        head->prev=temp;
        head=temp;
    }
    return head;
}
void display(struct Node *head)
{
    struct Node *curr = head;
    while (curr->next!= NULL)
    {
        // printf("%d->", curr->data);
        curr = curr->next;
    }
    // printf("NULL\n");

    while (curr!= NULL)
    {
        printf("%d->",curr->data);
        curr=curr->prev;
    }
    printf("NULL\n");
}
struct Node* delete(struct Node *head)
{
    struct Node *del=head;
    head=head->next;
    head->prev=NULL;
    free(del);
    return head;
}
int main()
{
    struct Node* head=NULL;
    head=insert(head,23);
    head=insert(head,33);
    head=insert(head,56);
    head=insert(head,67);
    head=insert(head,38);
    display(head);
    head=delete(head);
    display(head);
}