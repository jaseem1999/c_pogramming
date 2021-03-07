#include <stdio.h>
#include <stdlib.h>
int main(void){
    int Limit, i, flag=0;
    char name[100], searchKye;
    printf("Enter Limit of Number's of Name :");
    scanf("%d",&Limit);
    printf("Enter The Names of students :");
    for ( i = 0; i < Limit; i++)
    {
        scanf("%c",&name[i]);
    }
    printf("Enter The wanted limit No : ");
    scanf("%c",&searchKye);
    for ( i = 0; i < Limit; i++)
    {
        if (searchKye == name[i])
        {
            flag=1;
            break;/* code */
        }

        /* code */
    }
    if (flag == 1)
    {
       printf("Name Number is",name[i]+1); /* code */
    }else
    {
        printf("Default");
    }
    
    
    return EXIT_SUCCESS;
    
}