#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num,i,sum=0;
    printf("Enter a number");
    scanf("%d",&num);

    for ( i = 1; i < num; i++)
    {
        sum = sum+i;/* code */
    }
    printf("result : %d",sum);
    
    return EXIT_SUCCESS;
}