#include <stdio.h>

int main() {
    int n ;

    printf("Taper le nombre de termes de la suite de fibonacci : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre de termes doit etre positif.\n");
        return 0;
    }

    long long terme1 = 0, terme2 = 1;
    printf("Suite de fibonacci :\n");

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%lld ", terme1);
        } else if (i == 1) {
            printf("%lld ", terme2);
        } else {
            long long suivant = terme1 + terme2 ;
            printf("%lld ", suivant);
            terme1 = terme2 ;
            terme2 = suivant ;
        }
    }

    printf("\n");
    return 0;
}
