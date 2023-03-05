#include <stdio.h>
#include <math.h>

void create();
void traverse();
void reverse();
int main()
{
    int choice;
    int n;
        while(1)
        {
               
                printf("\n   MENU   \n");
                printf("\n 1.Create     \n");
                printf("\n 2.Display    \n");
                printf("\n 3.Reversed list \n");
                printf("\n 4.Exit       \n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        traverse();
                                        break;
                        
                        case 3:  
                                        

                                        reverse();
                                        printf("\nThe reversed list is:\n");
                                        traverse();
                                        break;
                        case 4:
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }
    return 0;                
                
}



struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL;
void create()
{ 
    struct node*temp;
    char ch;
    do{
        struct node *newnode =  (struct node*)malloc(sizeof (struct node));
        printf("\nGET THE DATA\n");
        scanf("%d",& newnode->data);
        newnode ->next = NULL;
        if(head==NULL)
        {
            head=newnode;
            
        }
        else
        {
            temp=head;
                while(temp->next!=NULL)
                {
                        temp=temp->next;
                }
                temp->next=newnode;
            
            
        }
        printf("continue\n");
        scanf("%c",&ch);
        
    }while(ch=='Y');
}
void traverse()
{
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
void reverse()
{
    struct node *p1,*p2,*p3;
    p1=head;
    p2=p1->next;
    p1->next = NULL;
    while(p2!=NULL)
    {
        p3=p2->next;
        p2->next = p1;
        p1=p2;
        p2=p3;
        
    }
    head=p1;
    
}
