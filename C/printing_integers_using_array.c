#include<stdio.h>
int main()
{
    int n;
    int arr[6];

    printf("Enter the values of integers you want to display: ");

    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}
