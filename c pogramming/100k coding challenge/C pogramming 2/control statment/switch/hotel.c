#include <stdio.h>
#include <stdlib.h>

int main(void){
    int choise;
    printf("1 for Poratta \n2 for beriyani \n3 for fried rice \n4 for mathi \nEnter your choise  ");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1/* constant-expression */:
        printf("You are selected Poratta");/* code */
        break;
    case 2:  
        printf("you are selecte beriyani");
        break;
    case 3:
        printf("you are selected fried rise");
        break;
    case 4:
         printf("you are selected mathi");
         break;

    default:
         printf("fool!!");
        break;
    }
    return EXIT_SUCCESS;
}