#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)

    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertatend(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p=head;
    while (p->next!=NULL)
    {
       p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    linkedlisttraversal(head);
    head=insertatend(head,32);
    linkedlisttraversal(head);
    return 0;
}