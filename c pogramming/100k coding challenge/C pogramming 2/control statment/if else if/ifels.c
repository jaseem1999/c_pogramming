#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("number is neghative");/* code */
    }else{
        printf("The number is positive ");
    }

    
    return EXIT_SUCCESS;
}