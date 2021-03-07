#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void){

    int c;
    c = sum();
    printf("Result is %d",c);
    return EXIT_SUCCESS;
}
 int sum(){
     int sum,num1,num2;
     printf("Enter two numbe");
     scanf("%d%d", &num1, &num2);
     sum = num1 + num2;
     return sum;
 }