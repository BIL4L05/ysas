#include <stdio.h>
#include <math.h>

int main(){

    float a , b , c , x , x1 , x2 , delta ;

    printf("saisir les valauer de a , b et c:");
    scanf(" %f %f %f", &a,&b ,&c);

    delta = pow(b,2) - (4*a*c);

    if(delta<0){
        printf("l equation est n est pas de solution");
    }

    else if(delta == 0){
        x = (-b) / (2*a) ;
        printf("l equation de l equation :%f", x);
    }
    
    else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("la solution de x1=%f et x2=%f", x1, x2 );
    }



    return 0 ;
}