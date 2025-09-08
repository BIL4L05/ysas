#include <stdio.h>

int main() {
    int n;
    
    printf("Taper le nombre de nombres impairs a afficher : ");
    scanf("%d", &n);

    printf("\nApproche 1 (2*i - 1) :\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", 2*i - 1);
    }

    printf("\n\nApproche 2 (tester la parité) :\n");
    int count = 0;
    int num = 1;

    while (count < n) {
        if (num % 2 != 0) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
