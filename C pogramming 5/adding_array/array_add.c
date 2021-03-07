#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,values[100],sum;
    printf("Enter Limit :");
    scanf("%d",&limit);
    printf("Enter valuues");
    for (int i = 0; i < limit; i++)
    {
       scanf("%d",&values[i]); /* code */
    }

    for (int i = 0; i < limit; i++)
    {
       sum=sum+values[i]; /* code */
    }
    printf("sum : %d",sum);

    
    return EXIT_SUCCESS;
}