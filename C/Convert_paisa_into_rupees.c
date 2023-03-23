#include<stdio.h>
int main()
{
   int paisa,rupee,paisa_new;
   printf("enter paisa: \n");
   scanf("%d",&paisa);
   rupee=paisa/100;
   paisa_new=paisa%100;
   printf("there is %d rupee and %d paisa" ,rupee,paisa_new);
    
    return 0;
}
