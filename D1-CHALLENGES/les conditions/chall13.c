#include <stdio.h>

int main() {
    double x1, y1, x2, y2;
    double x, y;

    
    printf("Entrez les coordonnees du 1er point du segment (x1 y1) : ");
    scanf("%lf %lf", &x1, &y1);

    printf("Entrez les coordonnees du 2eme point du segment (x2 y2) : ");
    scanf("%lf %lf", &x2, &y2);

    printf("Entrez les coordonnées du point a tester (x y) : ");
    scanf("%lf %lf", &x, &y);

    double cross = (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);

    if (cross == 0) {

        if (x >= (x1 < x2 ? x1 : x2) && x <= (x1 > x2 ? x1 : x2) &&
            y >= (y1 < y2 ? y1 : y2) && y <= (y1 > y2 ? y1 : y2)) {
            printf("Le point (%.2f, %.2f) est sur le segment.\n", x, y);
        } else {
            printf("Le point (%.2f, %.2f) est sur la droite mais en dehors du segment.\n", x, y);
        }
    } else {
        printf("Le point (%.2f, %.2f) n'est pas sur la droite donc pas sur le segment.\n", x, y);
    }

    return 0;
}