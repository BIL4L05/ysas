#include <stdio.h>

int main() {
    int number ;

    printf("Taper le nombre de nombres pairs a afficher : ");
    scanf("%d", &number);

    printf("Approche 1 (2*i) :\n");
    for (int i = 1; i <= number; i++) {
        printf("%d ", 2 * i);
    }

    printf("\nApproche 2 (incrementer par 2) :\n");
    int num = 2;
    for (int i = 0; i < number; i++) {
        printf("%d ", num);
        num += 2;
    }

    printf("\n");
    return 0;
}
