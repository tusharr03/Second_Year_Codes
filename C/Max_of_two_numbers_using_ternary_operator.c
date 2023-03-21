#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    
    max=(a>b)?a:b;
    
    printf("maxmimum is %d",max);
    
    
    
    return 0;
    
}
