#include <stdio.h>

int main() {
    int n;
    
    printf("Taper un entier positif n : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez taper un entier positif.\n");
        return 0;
    }

    int somme = 0;

    printf("\nApproche 1 (boucle for) :\n");
    for (int i = 1; i <= n; i++) {
        somme += i;
        printf("Apres ajout de %d, somme = %d\n", i, somme);
    }
    printf("Somme finale = %d\n", somme);

    somme = 0;
    int i = 1;
    printf("\nApproche 2 (boucle while) :\n");
    while (i <= n) {
        somme += i;
        printf("Apres ajout de %d, somme = %d\n", i, somme);
        i++;
    }
    printf("Somme finale = %d\n", somme);

    somme = n * (n + 1) / 2;
    printf("\nApproche 3 (formule directe) :\n");
    printf("Somme finale = %d\n", somme);

    return 0;
}