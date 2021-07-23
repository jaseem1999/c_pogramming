#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,values[100],searchKey,flag=0,i;
    printf("Enter Limit of Array : ");
    scanf("%d",&limit);
    printf("Enter values : ");
    for (i = 0; i < limit; i++)
    {
        scanf("%d",&values[i]);/* code */
    }
    printf("Please Enter Search key : ");
    scanf("%d",&searchKey);
    for ( i = 0; i < limit; i++)
    {
        if (searchKey == values[i])
        {
            flag=1;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("Value found of at possition %d", i+1);       /* code */
    }else
    {
        printf("Value no fount ");
    }
    
    return EXIT_SUCCESS;
    
}