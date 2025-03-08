#include <stdio.h>
#include< stdlib.h>

int main() {
    float tauxHoraire, heuresTravaillees, salaireBrut, salaireNet;
    float majoration = 0.25;
    float heuresNormales = 160.0;

    printf("Entrez le taux horaire: ");
    scanf("%f", &tauxHoraire);
    printf("Entrez le nombre d'heures travaillees: ");
    scanf("%f", &heuresTravaillees);

    if (heuresTravaillees > heuresNormales) {
        float heuresSupplementaires = heuresTravaillees - heuresNormales;
        salaireBrut = (heuresNormales * tauxHoraire) + (heuresSupplementaires * tauxHoraire * (1 + majoration));
    } else {
        salaireBrut = heuresTravaillees * tauxHoraire;
    }
    
    printf("Salaire brut: %.2f\n", salaireBrut);

    return 0;
}