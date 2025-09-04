#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrez le second instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier instant précède le second.\n");
    }
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le second instant précède le premier.\n");
    }
    else {
        printf("Les deux instants sont identiques.\n");
    }

    return 0 ;
}