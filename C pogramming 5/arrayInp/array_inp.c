#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[100],limit;
    printf("Enter limit");
    scanf("%d",&limit);

    printf("Enter values");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]); /* code */
    }
    printf("Entered are : \t");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t", a[i]); /* code */
    }
    
    
    
    return EXIT_SUCCESS;
}