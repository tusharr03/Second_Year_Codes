#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *one, *two, *three;
    one=(struct node *)malloc(sizeof(struct node));
    two=(struct node *)malloc(sizeof(struct node));
    three=(struct node *)malloc(sizeof(struct node));

    one->data=34;
    one->prev=NULL;
    one->next=two;

    two->data=22;
    two->next=three;
    two->prev=one;

    three->data=56;
    three->next=NULL;
    three->prev=two;

    one=head;

    display(head);
    return 0;
}
