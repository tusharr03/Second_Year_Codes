#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the sides of triangle: \n");
    scanf("%d%d%d",&s1,&s2,&s3);
    
    if (s1+s2>s3,s2+s3>s1,s1+s3>s2)
    printf("The triangle is valid. \n");
    
    else
    printf("The triangle is not valid \n");
    
    return 0;
}
