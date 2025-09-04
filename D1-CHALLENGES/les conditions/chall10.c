#include <stdio.h>

int main() {
    int J, M, A;

    
    char *NM[] = {
        "", "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"
    };

    printf("Taper une date au format JJ/MM/AAAA : ");
    scanf("%d/%d/%d", &J, &M, &A);

    if (M >= 1 && M <= 12) {
        printf("%02d-%s-%d\n", J, NM[M], A);
    } else {
        printf("Mois invalide \n");
    }

    return 0;
}