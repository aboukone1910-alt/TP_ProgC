#include <stdio.h>

void afficherBinaire(int nombre) {
    int i;
    int debut = 0;

    for (i = 31; i >= 0; i--) {
        int bit = (nombre >> i) & 1; 
        if (bit) debut = 1;
        if (debut) printf("%d", bit);
    }

    if (!debut) printf("0");

    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("%d en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
