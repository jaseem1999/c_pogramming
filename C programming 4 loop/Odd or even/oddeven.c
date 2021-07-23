#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit=10,i;
   
    for ( i = 1; i <= limit; i++)
    {
        if (i%2==0)
        {
            printf("%d \n",i);/* code */
        }
        
    }
    
    return EXIT_SUCCESS;
}