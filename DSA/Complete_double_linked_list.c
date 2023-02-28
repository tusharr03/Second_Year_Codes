#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;

void create()
{
    int n;
    struct node *ptr;
    printf("enter the number of nodes you want to create:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->prev=newnode->next=NULL;
        printf("Enter the data of newnode:\n");
        scanf("%d",&(newnode->data));
        if(head==NULL)
        {
            head=newnode;
            ptr=newnode;            
        }
        else
        {
            ptr->next=newnode;
            newnode->prev=ptr;
            ptr=newnode;
        }
        printf("Node created\n");
    }
}

struct node *insert_at_beggining()
{
    struct node *ptr1;
    ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1=head;
    if(ptr1==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter the data:\n");
        scanf("%d",&(ptr1->data));
        if(head==NULL)
        {
            ptr1->prev=NULL;
            ptr1->next=NULL;
            head=ptr1;
        }
        else
        {
            ptr1->prev=NULL;
            ptr1->next=head;
            head->prev=ptr1;
            ptr1=head;
        }        
    }
}

void insert_at_last()
{
    struct node *ptr2,*temp;
    ptr2=(struct node *)malloc(sizeof(struct node));
    ptr2=head;
    if(ptr2==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        if(ptr2==NULL)
        {
            ptr2->next=NULL;
            ptr2->prev=NULL;
            ptr2=head;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr2;
            ptr2->prev=temp;
            ptr2->next=NULL;
        }
    }
}

void insert_at_any_index()
{
    int i,index;
    struct node *ptr3,*temp;
    ptr3=(struct node *)malloc(sizeof(struct node));
    if(ptr3==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=head;
        printf("Enter the index\n");
        scanf("%d",&index);
        for(i=0;i<index;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("There are less than %d elements in list",index);
                return;
            }
        }
        printf("Enter the data\n");
        scanf("%d",&(ptr3->data));
        temp->next=ptr3->next;
        ptr3->prev=temp;
        temp->next=ptr3;
        temp->next->prev=ptr3;
    }
}

void delete_from_beggining()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Cannot delete\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        head=head->next;
        free(ptr);
    }
}

void delete_at_last()
{
    struct node *ptr;
    if(ptr==NULL)
    {
        printf("Cannot delete\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        if(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Nothing to print\n");
    }
    while(ptr!=NULL)
    {
        printf("%d \n",(ptr->data));
        ptr=ptr->next;
    }
}

int main()
{
    create();
    display();
    insert_at_last();
    display();
    return 0;
}
