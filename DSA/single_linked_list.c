#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_in_beggining(struct node *temp)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("overflow! \n");
    }
    else
    {
        printf("Enter the data for first node:\n");
        scanf("%d",&(ptr->data));
        ptr->next=head;
        head=ptr;
    }

}

struct node *insertinmiddle()
{
    int i,index;
    struct node *temp;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Overflow!\n");
    }
    else
    {
        pritnf("Enter the index of the previous node where you want to insert the element:\n");
        scanf("%d",&index);
        for(i=0;i<index;i++)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}

struct node *insertatend()
{
    struct node *temp;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));\
    if(temp==NULL)
    {
        printf("Overflow!\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}

void create()
{
    struct node *ptr=NULL;
    int n;
    printf("Enter the number of nodes you want to create: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data: \n");
        scanf("%d",&(newnode->data));
        if(head==NULL)
        {
            head=newnode;
            ptr=head;
        }
        else
        {
            ptr->next=newnode;
            ptr=newnode;
        }

    }

};

void deletefrombeggining()
{
    struct node *ptr;
    ptr=head;
    head=head->next;
    free(ptr);
}

void deleteatanindex()
{
    int index;
    struct node *ptr;
    struct node *temp=head;
    printf("Enter the index of node which you want to delete:\n");
    scanf("%d",&index);
    for(int i=0;i<index;i++)
    {
        temp=temp->next;
    }
    temp->next=ptr->next;
    free(ptr);
}

void deleteatend()
{
    struct node *ptr;
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    free(ptr);
}

void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is %d \n",ptr->data);
        ptr=ptr->next;
    }
};

int main()
{
    create();
    display(head);
    return 0;
}