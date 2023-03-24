#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A and B : \n");
    scanf("%d%d",&a,&b);
    c=a+=b;
    printf("sum is %d \n",c);
//    scanf("%d%d",&a,&b);
    c=a-=b;
    printf("difference is %d \n",c);
//    scanf("%d%d",&a,&b);
    c=a/=b;
    printf("ratio is %d \n",c);
//    scanf("%d%d",&a,&b);
    c=a*=b;
    printf("product is %d \n",c);
//    scanf("%d%d",&a,&b);
    c=a%=b;
    printf("remainder is %d \n",c);
    
    return 0;
}
