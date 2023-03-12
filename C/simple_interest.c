#include<stdio.h>

int main()
{
    int p,t;
    float r,result;
    printf("Enter the principle amount(in rupees),rate(in decimals) and time(in years):");
    scanf("%d%f%d",&p,&r,&t);

    result=p*r*t;
    printf("Intrest to pay: %.1f",result);
    return 0;
}
