#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

struct node *insertatbeggining(struct node *ptr)
{
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        int n;
        printf("\n Enter the data of first node:");
        scanf("%d",&n);
        ptr->data=n;
        ptr->next=head;
        head=ptr;
        printf("\n Node inserted.");  
        return head;   
    }
}

struct node *insertatend()
{
    struct node *ptr,*temp;
    int n;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("\n Enter the data:");
        scanf("%d",n);
        if(head==NULL)
        {
            ptr->next=NULL;
            ptr=head;
            printf("\n Node inserted!");
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("\n Node inserted");
           
        }
    }

}

struct node *insertatindex()
{
    int i,n,index;
    struct node *ptr, *temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("\n Enter the data: ");
        scanf("%d",&n);
        ptr->data=n;
        printf(" \nEnter the index where you want to insert: ");
        scanf("%d",&index);
        temp=head;
        for(i=0;i<index;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf(" \nCan't Insert");
                return;
            }
            ptr->next=temp->next;
            temp->next=ptr;
            printf("\n Node inserted");
        }
    }
}

void beggining_delete()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\n The list is empty");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("\n Node deleted from the beggining");
    }

}

void last_delete()
{
    struct node *ptr,*ptr1;
    if(head==NULL)
    {
        printf("\n The list is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("Only node of the list is deleted");
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1 = ptr;
            ptr=ptr->next;
            ptr1->next=NULL;
            free(ptr);
            printf("\n Deleted node from the last");
        }
    }
}

void display(struct node *ptr)
{
    if(ptr==NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        while(ptr!=NULL)
        {
        printf("\n The elements are: %d",ptr->data);
        ptr=ptr->next;
        }

    }

}

void create()
{
    int n;
    struct node *temp=NULL;
    printf("\n Enter the number of nodes you want to create:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("\n Enter the data:");
        scanf("%d",&(newnode->data));
        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
}

int main()
{
    
    create();
    insertatindex();
    display(head);

    return 0;
}