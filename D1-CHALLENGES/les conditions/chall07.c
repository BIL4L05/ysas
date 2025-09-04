#include <stdio.h>

int main() {
    char car ;

    printf("Taper une lettre : ");
    scanf(" %c", &car);

    if (car >= 65 && car <= 90) {
        printf("Le lettre '%c' est une lettre majuscule.\n", car);
    } else {
        printf("Le lettre '%c' n'est pas une lettre majuscule.\n", car);
    }

    return 0;
}