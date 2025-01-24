#include <stdio.h>

int main() {
    int nombrePhotocopies;
    float total = 0.0;

    printf("Entrez le nombre de photocopies : ");
    scanf("%d", &nombrePhotocopies);

    if (nombrePhotocopies <= 10) {
        total = nombrePhotocopies * 15.0;
    } else if (nombrePhotocopies <= 30) {
        total = (10 * 15.0) + ((nombrePhotocopies - 10) * 10.0);
    } else {
        total = (10 * 15.0) + (20 * 10.0) + ((nombrePhotocopies - 30) * 8.0);
    }

    printf("Le montant total de la facture est : %.2f F\n", total);

    return 0;
}
