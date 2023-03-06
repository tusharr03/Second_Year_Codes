#include<stdio.h>
#include<stdlib.h>

struct queue 
{
    int size;
    int front;
    int rear;
    int *Q;

};

void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));

}

void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1){
        printf("queue is full:");

    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct queue*q)
{
    int x=-1;
    if(q->front==q->rear){
        printf("queue is empty");
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void display(struct queue q)
{
    for(int i=q.front+1;i<=q.rear;i++){
        printf("\n %d",q.Q[i]);
    }
}

int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,30);
    enqueue(&q,37);
    enqueue(&q,47);
    display(q);
    printf("\n %d ",dequeue(&q));
    display(q);
    return 0;
}
