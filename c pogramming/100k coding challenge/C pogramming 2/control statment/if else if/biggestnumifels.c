#include <stdio.h>
#include <stdlib.h>
 
 int main(void)
 {
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("greatest number is %d",a);
    }
    else{
        printf("greatest number is %d",b);
    }
    
    return EXIT_SUCCESS;
 }