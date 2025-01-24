#include <stdio.h>
#include <stdlib.h>

int main()
{
    float NombreHeures,salaireDeBasse,TauxHoraire,Prime,Retenue,NetAPayer;
    NombreHeures = 30;
    TauxHoraire = 5000;

    salaireDeBasse = TauxHoraire * NombreHeures;
    Prime = (salaireDeBasse * 0.1);
    Retenue = ((salaireDeBasse + Prime) * 0.03);
    NetAPayer = (salaireDeBasse + Prime) - Retenue;

    printf("le salaire de base est : %f\n", salaireDeBasse);
    printf("la prime est : %f\n", Prime);
    printf("la retenue est : %f\n", Retenue);
    printf("la valeur net a payer est : %f\n", NetAPayer);

    return 0;
}
