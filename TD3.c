#include <stdio.h>
#include <stdlib.h>

int main()
{
    float TTC,TVA,HT;

    TVA = 0.18;

    printf("Entrez le montant TTC\n");
    scanf("%f",&TTC);

    HT = TTC/(1+TVA);

    printf("Le prix hors taxe est : %.2f\n",HT);

    return 0;
}
