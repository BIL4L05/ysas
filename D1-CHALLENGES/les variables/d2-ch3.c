#include <stdio.h>

int main(){

    int km ; 
    float yard ;

    printf("Taper une distance exprimee (en kilometres):");
    scanf("%d", &km);

    yard = km * 1093.61 ;

    printf("Votre distance en yard = %.2f", yard);
    return 0 ;
}