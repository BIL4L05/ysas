#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float number ;

    printf("enter your number :");
    scanf("%f", &number);

    if(number<0){
        printf("le nombre %.2f est negative", number);
    }
    else if(number>0){
        printf("le nombre %.2f est positif", number);
    }
    else{
        printf("le nombre %.2f est null", number);
    }

    return 0 ;
}