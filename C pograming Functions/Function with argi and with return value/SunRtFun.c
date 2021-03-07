#include <stdio.h>
#include <stdlib.h>

int sum(int,int);
int main(void){
    int a,b,res;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    res = sum(a,b);
    printf("result is %d\n",res);
    

    return EXIT_SUCCESS;
}

int sum(int num1, int num2){
    int Result;
    Result = num1 + num2;
    return Result;
}
