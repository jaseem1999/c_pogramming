#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,flag;
    printf("Enter A number");
    scanf("%d",&n);
    for (int i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
           flag=1;
           break; /* code */
        }
        
    }
    
    if (flag==0)
    {
        printf("prime number");
        /* code */
    }else{
        printf("not Prime number");
    }
    
    return EXIT_SUCCESS;
}