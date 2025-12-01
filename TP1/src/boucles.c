#include <stdio.h>

int main() {
    int compteur = 5;   

    if (compteur >= 10 || compteur <= 0) {
        printf("Erreur : compteur doit être entre 1 et 9.\n");
        return 1;
    }

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

int main() {
    int compteur = 5;    

    if (compteur >= 10 || compteur <= 0) {
        printf("Erreur : compteur doit être entre 1 et 9.\n");
        return 1;
    }

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

    return 0;
}


