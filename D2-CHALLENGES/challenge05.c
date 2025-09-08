#include <stdio.h>

int main() {

    double base, result = 1 ;
    int expo;

    printf("Taper la base : ");
    scanf("%lf", &base);
    printf("Taper l'expo : ");
    scanf("%d", &expo);

    // Cas exposant positif
    if (expo > 0) {
        for (int i = 0; i < expo; i++) {
            result *= base;
        }
    }
    
    else if (expo < 0) {
        for (int i = 0; i < -expo; i++) {
            result *= base;
        }
        result = 1.0 / result ;
    }
    else {
        result = 1;
    }

    printf("%lf^%d = %g\n", base, expo, result);

    return 0;
}
