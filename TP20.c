#include <stdio.h>
#include<stdlib.h>

#define GROUPEMENTS 2
#define ANNEES 3

int main() {
    int production[GROUPEMENTS][ANNEES];
    int subventions = 0;
    int totalCoton = 0;

    for (int i = 0; i < GROUPEMENTS; i++) {
        for (int j = 0; j < ANNEES; j++) {
            printf("Entrez la production de coton en tonnes pour le groupement %d, anneee %d : ", i + 1, j + 1);
            scanf("%d", &production[i][j]);
            totalCoton += production[i][j];
            if (production[i][j] >= 10) {
                subventions++;
            }
        }
    }

    printf("Nombre total de subventions accordees : %d\n", subventions);
    printf("Quantite totale de coton produite : %d tonnes\n", totalCoton);

    return 0;
}
