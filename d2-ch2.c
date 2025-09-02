#include <stdio.h>

int main (){

    int  temperature ;
    float k ;

    printf("Taper le degree de la temperature (en celius):");
    scanf("%d", &temperature);

    k = temperature + 273.15 ;

    printf("Le temperature en degres Kelvin = %.2f k", k);

    return 0 ;
}