#include <stdio.h>

void triangle_for(int compteur) {
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                printf("* ");
            }
            else if (i == compteur) {
                printf("* ");
            }
            else {
                printf("# ");
            }
        }
        printf("\n");
    }
}

void triangle_while(int compteur) {
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (j == 1 || j == i) {
                printf("* ");
            }
            else if (i == compteur) {
                printf("* ");
            }
            else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    int compteur = 5;    

    if (compteur >= 10 || compteur <= 0) {
        printf("Erreur : compteur doit être entre 1 et 9.\n");
        return 1;
    }

    printf("Triangle avec for :\n");
    triangle_for(compteur);

    printf("\nTriangle avec while :\n");
    triangle_while(compteur);

    return 0;
}


