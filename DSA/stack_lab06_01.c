#include<stdio.h>
#include<stdlib.h>>

int size=20;
char stack[20];
int top=-1;

void push(char data)
{
    if(top>=size-1)
    {
        printf("Stack Overflow!");
    }
    else
    {
        top=top+1;
        stack[top]=data;
    }
}

char pop()
{
    char data;

    if(top<0)
    {
        printf("\n Stack underflow");
        getchar();
    }
    else
    {
        data=stack[top];
        top=top-1;    
        return(data);
    }
}

int is_operator(char symbol)
{
    if(symbol=='^' || symbol=='*' || symbol=='+' || symbol=='-' || symbol=='/')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int precedance(char symbol)
{
    if(symbol=='^')
    {
        return (3);
    }
    else if(symbol=='*' || symbol=='/')
    {
        return (2);
    }
    else if(symbol=='+' || symbol=='-')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

                       
