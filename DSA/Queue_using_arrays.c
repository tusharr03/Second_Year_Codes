#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int main()
{
    struct queue q;
    q.size=20;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));   
}

void enqueue()
{
    struct queue *q;
    int val;
    if(isfull(q))
    {
        printf("Queue Overflow!");
    }
    else
    {
        q->r=q->r+1;
    }
}

int dequeue()
{
    struct queue *q;
    int a=1;
    if(q->f==q->r)
    {
        printf("\n Nothing to print.");
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}