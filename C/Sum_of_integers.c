#include<stdio.h>
int main()
{
    int i,a,sum;
    i=0;
    printf("Enter the number: \n");
    scanf("%d",&a);
    sum=0;
    while(i<=a)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("Sum is %d \n",sum);
    return 0;
}
