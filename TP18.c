#include <stdio.h>
#include <stdlib.h>

int main(){
    const int NbrEtudiant = 5;
    const int montant_minimum = 300000;

    int i, enRegle;
    float frais[NbrEtudiant], totalVerse;
    enRegle = 0;
    totalVerse = 0.0;

        for (i = 0; i < NbrEtudiant; i++) {
            printf("Entrez les frais de scolarite de l'etudiant %d \n:", i + 1);
            scanf("%f", &frais[i]);

            if (frais[i] >= montant_minimum) {
                enRegle++;
            }

            totalVerse += frais[i];
        }

    printf("Nombre d'etudiants en regle : %d\n", enRegle);
    printf("Montant total des frais verses \n: %.2f F", totalVerse);


    return 0;
}
