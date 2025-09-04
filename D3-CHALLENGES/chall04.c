#include <stdio.h>

int main() {
    int number, inverse = 0, LN;

    printf("Taper un nombre entier: ");
    scanf("%d", &number);

    int org = number; 

    while (number != 0) {
        LN = number % 10;
        inverse = inverse * 10 + LN ;
        number = number / 10;
    }

    printf("Le nombre %d inverse est: %d\n", org, inverse);

    return 0;
}
