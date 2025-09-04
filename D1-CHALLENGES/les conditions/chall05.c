#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int annee, choix ;
    long result ;

    printf("entrer le nombre des annees :");
    scanf("%d", &annee);

    printf("|| menu de convertir ||\n");
    printf("1- convertir en mois\n");
    printf("2- convertir en jours\n");
    printf("3- convertir en heures\n");
    printf("4- convertir en minutes\n");
    printf("5- convertir en secondes\n");
    scanf("%d", &choix);

    switch (choix){
        case 1 :
        result = annee * 12 ;
        printf("%d annee = %ld mois", annee, result);
        break;

        case 2 :
        result = annee * 356 ;
        printf("%d annee = %ld jours", annee, result);
        break;

        case 3 :
        result = annee * 365 * 24 ;
        printf("%d annee = %ld heures", annee, result);
        break;

        case 4 :
        result = annee * 365* 24 * 60 ;
        printf("%d annee = %ld minutes", annee, result);
        break;

        case 5 :
        result = annee * 365 * 24 * 60 * 60 ;
        printf("%d annee = %ld secondes", annee, result);
        break;

        default :
        printf("le choix qui a demande n exit pas ");
        break;

    }

    return 0 ;
}