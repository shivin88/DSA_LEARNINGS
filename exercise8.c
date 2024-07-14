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

    struct Node* insertatindex(struct Node*head,int data,int index)
    {
        struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
        struct Node * p=head;
        int i=0;
        while(i!=index-1)
        {
            p = p->next;
            i++;
        }
        ptr->data=data;
        ptr->next=p->next;
        p->next=ptr;
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
        head = insertatindex(head, 32,2);
        linkedlisttraversal(head);
        return 0;
    }