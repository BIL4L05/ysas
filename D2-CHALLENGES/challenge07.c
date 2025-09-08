#include <stdio.h>

int main() {
    int number , inverse = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &number);

    int n = number ;

    while (number != 0) {
        int chiffre = number % 10;    
        inverse = inverse * 10 + chiffre;
        number = number / 10;          
    }

    printf("Le nombre %d inverse est : %d\n", n, inverse);

    return 0;
}
