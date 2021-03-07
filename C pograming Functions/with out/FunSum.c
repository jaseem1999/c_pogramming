#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void){
    sum();
    sum();
    return EXIT_SUCCESS;
}
void sum(){
    int Num1,Num2,sum;
    printf("Enter 2 number \n");
    scanf("%d%d",&Num1,&Num2);
    sum = Num1 + Num2;
    printf("Result is  %d \n ",sum);
}