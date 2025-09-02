#include <stdio.h>

int main(){

    float p1, p2, p3, moyenne ;

    printf("Taper la 1er nombre :");
    scanf("%f", &p1);
    printf("Taper la 2eme nombre :");
    scanf("%f", &p2);
    printf("Taper la 3eme nombre :");
    scanf("%f", &p3);

    moyenne = ( p1*2 + p2*3 + p3*5 ) / (2+3+5) ;

    printf("|| La moyenne pondérée de trois nombres ||\n");
    printf("Le moyenne = %.2f", moyenne);

    return 0 ;

}