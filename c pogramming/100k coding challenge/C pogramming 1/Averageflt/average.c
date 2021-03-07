#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b,c,av;
    printf("Enter Three numbers :");
    scanf("%f%f%f",&a,&b,&c);
    av = (a+b+c)/3;
    printf("average is : %f",av);
    return EXIT_SUCCESS;
}