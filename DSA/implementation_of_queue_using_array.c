#include<stdio.h>
#include<stdlib.h>

void insert()
{
    int queue[20];
    int max;
    int front;
    int rear;
    int data;
    if(rear+1==max)
    {
        printf("OVERFLOW!");
    }
    else
    {
        if(front== -1 && rear== -1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }        
        queue[rear]=data;
    }
}