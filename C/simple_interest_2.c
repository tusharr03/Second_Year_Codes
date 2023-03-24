#include <stdio.h>

void SI();

int amount,principle,rate,t;

int main()
{
    printf("Enter the principle amount: \n");
    scanf("%d",&principle);
    printf("Enter the rate : \n");
    scanf("%d",&rate);
    printf("Enter the time: \n");
    scanf("%d",&t);
    
    SI(principle,rate,t);
    SI=principle*(1+rate*t);
    
    void main();
    int perimeter,area,length,breadth;
    printf("Enter length and breadth \n");
    scanf("%d%d",&length,&breadth);
    
    perimeter=2*(length+breadth);
    area=(length*breadth);
    
    printf("perimeter of rectangle is %d and area of rectangle is %d ",perimeter,area);
    
}
