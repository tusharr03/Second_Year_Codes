#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    struct node *temp;
    int choice,n;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Press 0 for exit");
    printf("\nPress 1 for node creation");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==0)
    {
        return 0;
    }
    else
    {
        printf("\nEnter the data: ");
        scanf("%d",&n);
        temp->data=n;
        printf("\nEnter the left child of %d:",n);
        temp->left=create();
        printf("\nEnter the rigth child of %d:",n);
        temp->right=create();
        return temp;
    }
}

void main()
{
    struct node *root;
    root=create();
}
