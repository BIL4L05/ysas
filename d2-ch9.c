#include <stdio.h>
#include <math.h>

int main(){

    float distance ;
    float x1 , x2 , y1 , y2 , z1 , z2  ;

    printf("entre les coordonneses de x1 , x2 :");
    scanf(" %f %f", &x1 , &x2 );

    printf("entre les coordonneses de y1 , y2 :");
    scanf(" %f %f", &y1 , &y2 );

    printf("entre les coordonneses de z1 , z2 :");
    scanf(" %f %f", &z1 , &z2 );

    // Distance = √[(x₂-x₁)² + (y₂-y₁)² + (z₂-z₁)²]
    distance = sqrt((pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2)));

    printf("la distance euclidienne entre deux points dans un espace tridimensionnel est : %f", distance);

    return 0 ;

}