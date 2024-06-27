struct Node
{
    int data;
    struct Node* next;
};

struct Node* insert_queue(struct Node* head,int inf)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=inf;
    head=
}