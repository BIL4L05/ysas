#include <stdio.h>

int main(){
    int number ;

    printf("Taper un nombre :");
    scanf("%d", &number);

    if (number%2==0){
        printf("le nombre %d est pair. ", number);
    }
    else {
        printf("Le nombre %d est impair", number);
    }

    return 0 ;
}