#include <stdio.h>

int main() {
    int LineN , k , j ; 

    printf("Taper le nombre de lignes : ");
    scanf("%d", &LineN);
    for (int i = 1; i <= LineN; i++) {

        for ( j = 1; j <= LineN - i; j++) {
            printf(" ");
        }
        for ( k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
