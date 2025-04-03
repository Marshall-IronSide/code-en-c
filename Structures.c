#include <stdio.h>
#include <stdlib.h>

struct PRODUIT {
  int numPdt;
  char nomPdt[20];
  double prixPdt;
  char couleurPdt[20];
};

int main() {
struct PRODUIT s1,s2;

printf("Saisissez les informations du produit s1 \n");
printf("Entrez le numero du produit\n");
scanf("%i",&s1.numPdt);
printf("Entrez le nom du produit\n");
scanf("%s",&s1.nomPdt);
printf("Entrez le prix du produit\n");
scanf("%d",&s1.prixPdt);
printf("Entrez la couleur du produit\n");
scanf("%s",&s1.couleurPdt);

printf("Saisissez les informations du produit s2\n");
printf("Entrez le numero du produit\n");
scanf("%i",&s2.numPdt);
printf("Entrez le nom du produit\n");
scanf("%s",&s2.nomPdt);
printf("Entrez le prix du produit\n");
scanf("%d",&s2.prixPdt);
printf("Entrez la couleur du produit\n");
scanf("%s",&s2.couleurPdt);

printf("Les informations du produit s1 sont:\n Identifiant:\n %i Nom :%s\n prix: %d\n Couleur :%s\n",s1.numPdt,s1.nomPdt,s1.prixPdt,s1.couleurPdt);
printf("Les informations du produit s2 sont:\n Identifiant:\n %i Nom :%s\n prix: %d\n Couleur :%s\n",s2.numPdt,s2.nomPdt,s2.prixPdt,s2.couleurPdt);

  return 0;
}
