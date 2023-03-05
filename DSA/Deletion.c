#include<stdio.h>
#include<stdlib.h>

struct node
{
    int pr;
    int ele;
    struct node *next;
};

struct node *FRONT=NULL;
void insert(int p,int v)
{
    struct node *newnode=(struct node*) malloc(sizeof(struct node));
    newnode->pr=p;
    newnode->ele=v;
    newnode->next=NULL;
    if(FRONT==NULL)
    {
        FRONT=newnode;
    }
    else if(FRONT!=NULL && FRONT->pr>p)
    {
        newnode->next=FRONT;
        FRONT=newnode;
    }
    else
    {
        struct node *prev=NULL;
        struct node *temp=FRONT;
        while(temp->next!=NULL && temp->pr<p)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp->next==NULL && temp->pr<p)
        {
            temp->next=newnode;
        }
        else
        {
            prev->next=newnode;
            newnode->next=temp;
        }              
    }
} 
void delete()
{
    struct node *temp;
    temp=FRONT;
    if(FRONT==NULL)
    {
        printf("Queue is empty");   
    }
    else
    {
        FRONT=FRONT->next;
        free(temp);
    }
}
void traverse()
{
    struct node *ptr;
    ptr=FRONT;
    printf("Traversing:\n");
    while(ptr!=NULL)
    {
        printf("%d",ptr->ele);
        ptr=ptr->next;
    }
}
int main()
{
    insert(1,2);
    insert(3,3);
    insert(2,4);
    traverse();
    delete();
    printf("\n");
    traverse();
    insert(1,6);
    printf("\n");
    traverse();

    return 0;
}



