/*vÉcrivez un programme qui calcule la surface d'un rectangle à partir de sa longueur et de sa largeur.
Formule : Surface = longueur × largeur
Objectif : Appliquer une formule géométrique simple.v*/

#include <stdio.h>

int main (){

    float surface , longueur , largeur ;

    printf("Taper le longueur de rectangle :");
    scanf("%f", &longueur);

    printf("Taper le largeur de rectangle :");
    scanf("%f", &largeur);

    //Surface = longueur × largeur
    surface = longueur * largeur ;

    printf("La surface d'un rectangle est %f", surface);

    return 0 ;

}