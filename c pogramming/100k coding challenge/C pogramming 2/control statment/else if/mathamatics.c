#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,c,result;
    printf("Enter Two number");
    scanf("%d%d",&a,&b);
    printf("1 for addition \n2 for substraction \n3 for mutiplication \n4 for division \nEnter Your choise ");
    scanf("%d",&c);
    if (c==1/* condition */){
        result = a+b;
        printf("Result: %d", result);

        /* code */
    }else if (c==2/* condition */){
       result= a+b; /* code */
       printf("Result: %d", result);
    }
    else if (c==3){
       result= a*b; /* code */
       printf("Result: %d", result);
    }
    else if (c==4/* condition */){
        result= a/b;/* code */
        printf("Result: %d", result);
    }
    else{
        printf("Fool!!!");
    }
    
   
    return EXIT_SUCCESS;
}