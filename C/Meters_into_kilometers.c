#include<stdio.h>
int main()
{
    int meter,kilometer,meter_new;
    printf("Enter distance in meter: \n");
    scanf("%d",&meter);
    
    kilometer=meter/1000;
    meter_new=meter%1000;
    printf("Distance is %d kilometer and %d meter",kilometer,meter_new);
    
    return 0;
}
