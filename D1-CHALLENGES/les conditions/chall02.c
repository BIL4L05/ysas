#include <stdio.h>

int main(){
    
    char caractere ;

    printf("Taper une caractere pour verifie s il voyelle ou non :");
    scanf(" %c", &caractere);

    switch(caractere){

        case'a':case'A':
        printf("Le caractere %c et un voyelle", caractere);
        break;
        case'e':case'E':
        printf("Le caractere %c et un voyelle", caractere);
        break;
        case'i':case'I':
        printf("Le caractere %c et un voyelle", caractere);
        break;
        case'o':case'O':
        printf("Le caractere %c et un voyelle", caractere);
        break;
        case'u':case'U':
        printf("Le caractere %c et un voyelle", caractere);
        break;

        default: printf("Le caractere %c n est pas voyelle", caractere);
        break;
    }

    return 0 ;
}