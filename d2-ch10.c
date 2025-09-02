#include <stdio.h>
#include <math.h>

int main (){

    int rayon ;
    const float pi = 3.14159 ;
    float volume ;

    printf("Taper le sphere de la rayon :");
    scanf("%d", &rayon);

    // Volume = (4/3) × π × r³
    volume = (4/3) * pi * pow(rayon,3) ;

    printf("le volume de la sphere est %.2f", volume);

    return 0 ;
}