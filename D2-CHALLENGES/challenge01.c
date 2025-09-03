#include <stdio.h>

int main(){

    int m , i ;
    printf("Taper le nombr :");
    scanf("%d", &m);

    for ( i=1 ; i<=10 ; i++){
        printf("%d x %d = %d\n", i, m , m*i);
    }

    return 0 ;
}