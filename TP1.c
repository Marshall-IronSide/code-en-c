#include <stdio.h>
#include <stdlib.h>
int main()
{
    float prixAchat,transport,prixVente,benefice;
    unsigned int nombre;
    
    printf("Entrez le prix d'achat de l'article\n");
    scanf("%f",&prixAchat);
    printf("Entrez le nombre d'articles achete\n");
    scanf("%i",&nombre);
    printf("Entrez les frais de transport\n");
    scanf("%f",&transport);
    printf("Entrez le prix de vente\n");
    scanf("%f",&prixVente);

    benefice = (prixVente * nombre) - (prixAchat * nombre + transport);
    printf("Le benefice realise est : %.2f\n",benefice);

    return 0;
}