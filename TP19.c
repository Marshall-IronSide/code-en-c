#include <stdio.h>
#include <stdlib.h>

int main(){

const int valeurTab = 5;
int TABVAL[valeurTab];
int maxRendement;

        for (int i = 0; i < valeurTab; i++) {
            printf("Saisissez la valeur N%d  de rendement \n:",i+1);
            scanf("%d", &TABVAL[i]);
        }

    maxRendement = TABVAL[0];

        for (int i = 1; i < valeurTab; i++) {
            if (TABVAL[i] > maxRendement) {
                maxRendement = TABVAL[i];
            }
        }

    printf("Le plus grand rendement effectue est \n: %d", maxRendement);


    return 0;
}
