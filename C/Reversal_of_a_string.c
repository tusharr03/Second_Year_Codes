#include <stdio.h>
int main()
{
    char str[1000], rev[1000];
    int i, j, count = 0;
    scanf("%s", str);
    printf(" String Before Reverse: %s  \n", str);
 
    while (str[count] != '\0')
    {
        count++;
        
    }
    j = count - 1;

 
    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }

    printf(" String After Reverse: %s \n", rev);
    
}
