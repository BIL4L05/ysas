#include <stdio.h>

int main(){

    int mention ;

    printf("Taper votre moyenne :");
    scanf("%d", &mention);

    if( mention<10 ) {
        printf(" Echec ");
    }
    else if ( mention >= 10 && mention <12 ){
        printf(" Passable ");
    }
    else if ( mention >= 12 && mention <14 ){
        printf(" Assez Bien ");
    }
    else if ( mention >= 14 && mention <16 ){
        printf(" Bien ");
    }
    else if ( mention >= 16 && mention <=20 ){
        printf(" Tres bien ");
    }
    else {
        printf("Le moyenne qui a taper invalid");
    }

    return 0 ;

    }