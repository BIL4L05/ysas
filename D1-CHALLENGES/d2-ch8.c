#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3;
    double moyenneGeo;

    printf("Taper le 1er nombre : ");
    scanf("%d", &num1);
    printf("Taper le 2ème nombre : ");
    scanf("%d", &num2);
    printf("Taper le 3ème nombre : ");
    scanf("%d", &num3);

    moyenneGeo = cbrt((double)num1 * num2 * num3);

    printf("Moyenne géométrique = %.2f\n", moyenneGeo);

    return 0;
}