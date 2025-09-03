#include <stdio.h>

int main(){

    float temp ;

    printf("Taper le temperature en Celsius :");
    scanf("%f", &temp);

    if( temp < 0 ){
        printf("Etat de l eau est glace");
    }
    else if ( temp >= 100 ){
        printf("Etat de l eau est vapeur");
    }
    else {
        printf("Etat de l eau est liquide");
    }

    return 0 ;

}