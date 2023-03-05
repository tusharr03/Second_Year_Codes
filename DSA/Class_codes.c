
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
} * start;
typedef struct node node;

void createList(int n);
void traverseList();
void enterNodeAtAnyPosition();
void enterAfterAnyDataValue();
void enterNodeAtFirst();
void enterNodeAtLast();
void deleteAnyNode();
void deleteFirstNode();
void deletionAtEnd();
void searchingData();
void deleteAlternateNodes();
void transverseFromLast();
void deletion_of_given_data();


int main()
{
    printf("a)Traversal of the list \nb)Check if the list is empty\nc)Insert a node at the certain position(at beginning/end/any position)\nd)Delete a node at the certain position(at beginning/end/any position)\ne)Delete a node for the given key\nf)Count the total number of nodes\ng)Search for an element in the linked list");
    int n;
    char c;
    printf("entre the choice");
    scanf("%c",&c);
    switch(c)
    {
    printf("Enter Number of Nodes : ");
    scanf("%d", &n);
    createList(n);

    case 'a':printf("Enter Number of Nodes : ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list : \n");
    traverseList();
    break;
    case 'c':printf("Enter Number of Nodes : ");
    scanf("%d", &n);
    createList(n);

    printf("\nNodes after a new node is inserted in the starting of list : \n");
    enterNodeAtFirst();
    traverseList();

    printf("\nNodes after a new node is inserted in the ending of list : \n");
    enterNodeAtLast();
    traverseList();
    
    printf("\nNodes after entering a new node at anywhere between the list : \n");
    enterNodeAtAnyPosition();
    traverseList();
    case 'd':printf("Enter Number of Nodes : ");
    scanf("%d", &n);
    createList(n);

    printf("\nNodes after deleting the first node is : \n");
    deleteFirstNode();
    traverseList();

    printf("\nNodes after deleting the last node is : \n");
    deletionAtEnd();
    traverseList();
    break;
case 'e':printf("Enter Number of Nodes : ");
    scanf("%d", &n);
    createList(n);

    printf("\nNodes after deleting node anywhere in the list : \n");
    deleteAnyNode();
    traverseList();
    break;

 case 'g':printf("Enter Number of Nodes : ");
    scanf("%d", &n);
    createList(n);

    printf("\nSearching any Data in the List : \n");
    searchingData();
    break;
}
}
void createList(int n)
{
    node *ptr, *new;
    int i;
    start = (node *)malloc(sizeof(node));
    ptr = start;

   printf("Enter data in the node 1 : ");
    scanf("%d", &start->data);

    start->next = NULL;
    start->pre = NULL;

    for (i = 2; i <= n; i++)
    {
        new = (node *)malloc(sizeof(node));

        printf("Enter data in the node %d : ", i);
        scanf("%d", &new->data);

        new->next = NULL;
        new->pre = NULL;

        ptr->next = new;
        new->pre = ptr;

        ptr = ptr->next;
    }
}

void traverseList()
{
    node *ptr;

    ptr = start;
    while (ptr != NULL)
    {
        if (start == NULL)
        {
            printf("Linked List not created");
            break;
        }
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enterNodeAtFirst()
{
    node *new;
    new = (node *)malloc(sizeof(node));
 printf("Enter data in the new node created at first : ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->pre = NULL;

    new->next = start;
    start->pre = new;
    start = new;
}

void enterNodeAtLast()
{
    node *ptr, *new;
    ptr = start;

    new = (node *)malloc(sizeof(node));
    printf("Enter Data in the New node created at end : ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->pre = NULL;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    new->pre = ptr;
}

void enterNodeAtAnyPosition()
{
    node *ptr = start, *new = (node *)malloc(sizeof(node));
    int pos, i;

    printf("Enter position at you want to enter a new node : ");
    scanf("%d", &pos);

    printf("Enter the Data of the node to be inserted in the list : ");
    scanf("%d", &new->data);

    for (i = 1; i < pos - 1; i++)
    {
        ptr = ptr->next;
    }
 new->next = ptr->next;
    (ptr->next)->pre = new;
    new->pre = ptr;
    ptr->next = new;
}

void enterAfterAnyDataValue()
{
    node *ptr = start, *new = (node *)malloc(sizeof(node));
    new->next = NULL;
    new->pre = NULL;
    int d, data;

    printf("Enter the data after which you want to insert the data : ");
    scanf("%d", &d);

    printf("Enter the data to be inserted in the new list : ");
    scanf("%d", &new->data);

    while (ptr->data != d && ptr != NULL)
    {
        ptr = ptr->next;
    }
    new->next = ptr->next;
    (ptr->next)->pre = new;
    new->pre = ptr;
    ptr->next = new;
}

void deleteAnyNode()
{
    node *ptr, *ptr1;
    int n, i;
    ptr = start;
    printf("Enter the position of whhich you want to delete the node : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
    }
    ptr1->next = ptr->next;
    (ptr->next)->pre = ptr1;
    free(ptr);
}

void deleteFirstNode()
{
    node *ptr;
    ptr = start;
    start = start->next;
    start->pre = NULL;
    free(ptr);
}

void deletionAtEnd()
{
    node *ptr, *ptr1;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr1 = ptr;
        ptr = ptr->next;
    }
    ptr1->next = NULL;
    free(ptr);
}

void searchingData()
{
    node *ptr;
    int counter = 0, data, flag = 0;
    ptr = start;
    printf("Enter data to be search in the list : ");
    scanf("%d", &data);

    while (ptr != NULL)
    {
        counter++;
        if (ptr->data == data)
        {
            printf("Entered Data is found at the Node : %d\n", counter);
            flag++;
        }
        ptr = ptr->next;
    }
    if (flag == 0)
    {
        printf("Data Not Found : \n");
    }
}
void deletion_of_given_data()
{
    struct node *ptr;
    int key;
    ptr = start;
    printf("Enter the data for deletion : ");
    scanf("%d", &key);
    while (ptr->next != NULL && ptr->data != key)
    {    
        ptr = ptr->next;
    }
    (ptr->pre)->next = ptr->next;
    (ptr->next)->pre = ptr->pre;
    free(ptr);
}
