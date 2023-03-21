#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: \n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 2:
        printf("value is 2 \n");
        
        break;
        
        case 3:
        printf("value is 3 \n");
        
        break;
        
        default:
        printf("value is unknown \n");
        
        return 0;
    }
    
}
