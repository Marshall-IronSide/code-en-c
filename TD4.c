#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salaireBrut,retenues,indemnites,tauxHoraire,retenueCaisse,retenueImpots,anciennete,allocation,salairNet;
    unsigned int nomdreHeures,nombreAnnee,nombreEnfant;

    printf("Entrez le nombre d'heures effectues\n");
    scanf("%i",&nomdreHeures);
    tauxHoraire = 1450;
    salaireBrut = nomdreHeures*tauxHoraire;
    retenueCaisse = salaireBrut*0.041;
    retenueImpots = salaireBrut*0.039;
    retenues = retenueCaisse + retenueImpots;

    printf("Entrez le nombre d'annne effectue dans la societe\n");
    scanf("%i",&nombreAnnee);
    printf("Combien d'enfants avez vous ?\n");
    scanf("%i",&nombreEnfant);

    anciennete = nombreAnnee*16200;
    allocation = nombreEnfant*20000;
    indemnites = allocation+anciennete;
    salairNet = salaireBrut + indemnites - retenues;

    printf("...Societe LAPIDUS : SALAIRES...\n");
    printf("Salaire brute : %.2f F\n",salaireBrut);
    printf("Retenues : %.2f F\n",retenues);
    printf("indeminites : %.2f F\n",indemnites);
    printf("anciennete : %.2f F\n",anciennete);
    printf("allocation : %.2f F\n",allocation);
    printf("retenue Caisse : %.2f F\n",retenueCaisse);
    printf("retenue Impots : %.2f F\n",retenueImpots);
    printf("------------------------------------------------\n");
    printf("SALAIR NET : %.2f F",salairNet);

    return 0;


}
