#include<stdio.h>
int main()
{
    float x1,x2,a,b,c,d,m,n;
    printf("Enter the values: \n");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
    
    x1=(m*d-b*n)/(a*d-b*c);
    x2=(n*a-c*m)/(a*d-b*c);
    
    printf("the value of x1 is %f and x2 is %f \n",x1,x2);
    
    
    
    return 0;
    
}
