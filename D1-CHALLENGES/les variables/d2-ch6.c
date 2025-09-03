#include <stdio.h>

int main (){

    float num1, num2, result ;
    char op ;

    printf("taper le 1er nombre :");
    scanf("%f", &num1);
    printf("entre l operateur( + , - , * , / ) :");
    scanf(" %c", &op);
    printf("taper le 2eme nombre :");
    scanf("%f", &num2);

    switch (op){
        
        case '+' :
        result = num1 + num2 ;
        printf("le resultat de votre operation = %.2f", result);
        break;

        case '-' :
        result = num1 - num2 ;
        printf("le resultat de votre operation = %.2f", result);
        break;

        case '*' :
        result = num1 * num2 ;
        printf("le resultat de votre operation = %.2f", result);
        break;

        case '/' :
        if(num2 != 0){
            result = num1 / num2 ;
            printf("le resultat de votre operation = %.2f", result);
        }
        else {
            printf("l operation n admis pas de divise sur 0");
        }
        break;

        default : printf("invalid operation try again");
        break;

    }

    return 0 ;

}