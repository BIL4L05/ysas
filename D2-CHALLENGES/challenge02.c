#include <stdio.h>

int main() {
    int number ;
    unsigned long long factorielle = 1;

    printf("Taper un entier positif : ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Le nombre .\n");
    } else {

        for (int i = 1 ; i <= number ; i++) {
            factorielle *= i;
        }

        printf("%d! = %llu\n", number , factorielle);
    }
    
    return 0;
}