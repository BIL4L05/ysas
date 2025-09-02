#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe ;
    int age ;
    char adresseMail[100] ;

    printf("Veuillez taper votre prenom : ");
    scanf("%s", prenom);

    printf("Veuillez taper votre nom : ");
    scanf("%s", nom);

    printf("Veuillez taper votre age : ");
    scanf("%d", &age);

    printf("Veuillez taper votre sexe (m/f) : ");
    scanf(" %c", &sexe);

    printf("Veuillez taper votre E-mail : ");
    scanf("%s", adresseMail);

    printf("\n|| YOUR INFORMATION CARD ||\n");
    printf("Prenom : %s\n", prenom);
    printf("Nom : %s\n", nom);
    printf("Age : %d ans\n", age);
    printf("Sexe : %c\n", sexe);
    printf("E-mail : %s\n", adresseMail);

    return 0;
}