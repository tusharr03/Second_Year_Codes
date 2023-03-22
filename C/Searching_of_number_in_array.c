#include <stdio.h>
int* search(int*,int);
int main()
{
    int a[5],i,number;
    int* result;
  
    printf("enter the elements of the array");
  
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("enter number");
    scanf("%d",&number);

    result=search(a,number);
    if(result==0){
        printf("not found");
    }
   
    else
    {
        printf("number found at address %p",result);
        
    }
    return 0;
}

int* search(int* x,int n){
    int i;
    
    for(i=0;i<5;i++)
    {
        if(x[i]==n)
        {
            return &x[i];
        }
    }
    return 0;
}
