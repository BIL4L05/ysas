#include <stdio.h>
#include <math.h>

int main() {
    int number , somme = 0;

    printf("Taper un nombre entier n : ");
    scanf("%d", &number);

    for (int i = 1 ; i <= number ; i++) {
        somme += i ;
    }

    printf("La somme = %d\n", somme);

    return 0;
}
