#include<stdio.h>
int main()
{
    long int n;
    long int arr[n];
    long int avg;
    long int sum=0;
    printf("Enter the frequency of numbers: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    
        (avg = sum/n);

    printf("Average is :%d \n",avg);

    return 0;

}
