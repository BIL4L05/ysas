#include <stdio.h>

int main (){

    int num1 , num2 , result1 , result2s , result2t ;

    printf("Taper le 1er nombre :");
    scanf("%d", &num1);
    printf("Taper le 2eme nombre :");
    scanf("%d", &num2);

    if(num1!=num2){
        result1 = num1 + num2 ;
        printf("Les deux nombres sont differents.\n");
        printf("Donc leur somme = %d\n", result1);
        
    }
    else if(num1==num2){
        result2s = num1 + num2 ;
        result2t = (num1 + num2)*3 ;
        printf("Les deux nombres sont identiques.\n");
        printf("Donc leur somme = %d\n", result2s);
        printf("Et le triple de %d = %d\n", result2s, result2t );
    }


}