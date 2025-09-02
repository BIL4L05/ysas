#include <stdio.h>

int main(){

    float kmparh , mpars ;

    printf("Taper le vitesse en kilometre :");
    scanf("%f", &kmparh);

    mpars = kmparh * 0.27778 ;

    printf(" || convertire le vitesse vers des metres par seconde ||\n");
    printf(" Donc le resultat de la convertir est %.2f m/s ", kmparh);

    return 0 ;
}