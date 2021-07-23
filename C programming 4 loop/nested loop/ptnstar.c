#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n=5;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");/* code */
        }
        printf("\n");
        /* code */
    }
    
    return EXIT_SUCCESS;
}
