#include <stdio.h>
#include<stdlib.h>

int main() {
    float prix_unitaire, montant_total, remise, montant_remise, prix_payer;
    int nombre_sacs;

    printf("Entrez le prix unitaire du sac : ");
    scanf("%f", &prix_unitaire);
    printf("Entrez le nombre de sacs achetés : ");
    scanf("%d", &nombre_sacs);

    montant_total = prix_unitaire * nombre_sacs;

    if (montant_total >= 250000) {
        remise = 10.0;
    } else {
        remise = 5.0;
    }

    montant_remise = montant_total * (remise / 100);
    prix_payer = montant_total - montant_remise;

    printf("\nMontant total : %.2f €\n", montant_total);
    printf("Remise : %.2f €\n", montant_remise);
    printf("Prix à payer : %.2f €\n", prix_payer);

    return 0;
}