#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head;

void insertfrombeggining()
{
    struct node *ptr;
    int n;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("\n Enter the data: ");
        scanf("%d",&n);

        if(head==NULL)
        {
            ptr->prev=NULL;
            ptr->next=NULL;
            ptr->data=n;
            ptr=head;
        }
        else
        {
            ptr->data=n;
            ptr->prev=NULL;
            ptr->next=head;
            head->next=ptr;
            head=ptr;
        }
        printf("\n node inserted");
    }
}

void insertion_at_last()
{
    struct node *ptr,*temp;
    int n;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\n OVERFLOW!");
    }
    else
    {
        printf("\nEnter the data: ");
        scanf("%d",&n);
        ptr->data=n;
        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            head=ptr;
        }
        else
        {
            temp=head;
            while((temp->next)!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=NULL;
        }
    }
}

void create()
{
    int n;
    struct node *temp=0;
    printf("\n Enter the number of nodes you want to create: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;
        printf("\n Enter the data:");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("The element is %d",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    create();
    insertfrombeggining();
    display();

    return 0;
}

