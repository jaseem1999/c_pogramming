#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,i,value[100],temp,j;
    printf("enter limit : ");
    scanf("%d",&limit);
    printf("Enter values");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&value[i]);
    }
    for ( i = 0; i < limit-1; i++)
    {
        for ( j =i+1; j < limit; j++)
        {
           if (value[i]>value[j])
           {
              temp = value[i];
              value[i] = value[j];
              value[j] = temp; 
           }
            
        }
           
    }
    printf("Shorted array \t");
    for ( i = 0; i < limit; i++)
    {
       printf("%d \t ",value[i]);
    }
    
    return EXIT_SUCCESS;
}