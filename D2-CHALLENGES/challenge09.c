#include <stdio.h>

int main() {
    int number , compteur = 0 ;

    printf("Taper un entier positif : ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Veuillez taper un nombre positif.\n");
        return 0;
    }

    if (number == 0) {
        compteur = 1 ;
    } else {
        while (number > 0) {
            compteur++ ;
            number = number / 10 ;
        }
    }

    printf("Le nombre a %d chiffre.\n", compteur);
    return 0;
}