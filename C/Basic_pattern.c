#include <stdio.h>

int sum(int a , int b);
void printstar(int n)
{
    for(int i=0;  i < n;  i++)
    {
        printf("%c \t  ",'*');
    }
    
}
    
int takenumber()
{
    int i;
    printf("Enter a number \n");
    scanf("%d",&i);
    
    return i;
}


    

int main()
{
    int a , b , c;
    a = 5;
    b = 6;
  //  c = sum(a,b);
    c=takenumber();
  
    
   // printstar(10);
      printf("the number entered is %d \n ", c);
    
    
    return 0;
}

int sum(int a ,int b)

{
    return a + b;
}
