#include <stdio.h>

int main() {
    char cara ;

    printf("Entrez un caractere : ");
    scanf(" %c", &cara);

    if (cara >= 65 && cara <= 90) {
        printf("'%c' est une lettre alphabetique.\n", cara);
        printf("C'est une majuscule.\n");
    }
    else if (cara >= 97 && cara <= 122) {
        printf("'%c' est une lettre alphabetique.\n", cara);
        printf("C'est une minuscule.\n");
    }
    else {
        printf("'%c' n'est pas une lettre alphabetique.\n", cara);
    }

    return 0;
}