#include<stdio.h>
int main()
{
    int second,minute,hour,second_new,minute_new;
    printf("Enter time in seconds: \n");
    scanf("%d",&second);
    
    minute=second/60;
    minute_new=minute%60;
    hour=second/3600;
    second_new=second%60;
    printf("%d hours and %d minutes %d seconds",hour,minute_new,second_new);
    
    return 0;
}
