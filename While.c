#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*int i = 1;
    while(i <21)
    {
        printf("%i\n",i);
        i++;
    }*/
    /*int i;
    int a =0;
    while(i>=0)
    {
        printf("Entrez un nombre positif\n");
        scanf("%d",&i);
        a +=i;
        i++;
    }
    printf("La somme est : %d",a);*/
   /* int i =0,notes = 0,count =0;
    float moyenne;
    while(notes>=0)
    {
        printf("Entrez une note\n");
        scanf("%d",&notes);
        if (notes>0){
           i +=notes;
           count+=1;
        }
    }
    moyenne =(float)i/count;
    printf("La somme des notes est : %d\n",i);
    //printf("Le nombre de notes est: %d\n",count);
    printf("La moyenne est: %.2f\n ",moyenne);*/
    /*int nbre, count,somme = 0;
    float moyenne;
    do{
        printf("Entrez un nombre\n");
        scanf("%i",&nbre);
        count;
        somme+= nbre;
        count++;

    }
    while(nbre != 0);
    moyenne = (float)somme/(count-1);
    printf("La somme des notes est : %d\n",somme);
    printf("La moyenne est: %.2f\n ",moyenne);*/

   /* float somme,notes,moyenne;
    int i;
    notes =0;
    for(i=0;i<10;i++)
    {
        printf("Entrez une note\n");
        scanf("%f",&notes);
        somme +=notes;
    }
    moyenne = (float)somme/10;
    printf("La moyenne est : %.2f\n",moyenne);*/

    /*int count,i,nbreheures,tauxHoraire;
    float salairBrute,masseSalariale;
    count = 0;
    masseSalariale = 0;
    const int n = 5;
    const int SMIG = 65000;
    for(i = 0;i<n;i++)
    {
        printf("Entrez le nombre d'heures de l'employe %i\n",i+1);
        scanf("%d",&nbreheures);
        printf("Entrez le taux horaire de l'employe %i \n",i+1);
        scanf("%d",&tauxHoraire);
        salairBrute = (float)nbreheures*tauxHoraire;
        printf("Le salaire mensuel de l'employe %i est %.2f :\n",i+1,salairBrute);
        if( salairBrute < SMIG)
        {
            count += 1;
        }

        masseSalariale += salairBrute;
    }
    printf("La masse salariale est: %.2f \n",masseSalariale);
    printf("%d personnes ont un salaire inferieur au SMIG\n",count);*/


    /*const int NbrAticles = 5;
    float TPRIX[NbrAticles];
    int TQTE[NbrAticles];
    float valeurStock;


        for (int i = 0; i < NbrAticles; i++) {
            printf("Entrez le prix de l'article %d \n: ", i + 1);
            scanf("%f", &TPRIX[i]);
            printf("Entrez la quantite en stock de l'article %d \n:", i + 1);
            scanf("%d", &TQTE[i]);
        }

    printf("______Valeur en stock des articles :______\n");
        for (int i = 0; i < NbrAticles; i++) {
            valeurStock = TPRIX[i] * TQTE[i];
            printf("Article %d : %.2f F\n", i + 1, valeurStock);*
        }*/
/*const int NbrEtudiant = 2;
const int matieres = 3;
float moyenne [NbrEtudiant];
int i,j;
int notes[NbrEtudiant];
    for( i = 0; i < NbrEtudiant;i++){
        int somme = 0;
        printf("Etudiant %d\n:",i+1);
        for (j = 0; j < matieres; j++) {
            printf("Saisissez la note  %d \n:",j+1);
            scanf("%d",&notes[i]);
            somme = somme+notes[i];
                     }
        moyenne[i] = somme/matieres;

        }
        for( i = 0; i < NbrEtudiant;i++){
                printf("La moyenne de l'etudiant %d est: %.2f\n",i+1,moyenne[i]);*/
/*const int EMPLOYES = 3;
const int MOIS = 2;


    float salaires[EMPLOYES][MOIS];
    float somme[EMPLOYES];
    float  sommeTotale = 0;
    float sommeMois[MOIS] = {0};
    int i, j;

    for (i = 0; i < EMPLOYES; i++) {
        somme[i] = 0;
    }


    for (i = 0; i < EMPLOYES; i++) {
        printf("Entrez les salaires mensuels pour l'employe %d :\n", i + 1);
        for (j = 0; j < MOIS; j++) {
            printf("Mois %d : ", j + 1);
            scanf("%f", &salaires[i][j]);
       somme[i] += salaires[i][j];
        }
        sommeTotale += somme[i];
    }

    printf("\n La somme des salaire des employes:\n");
    for (i = 0; i < EMPLOYES; i++) {
        printf("\nEmploye %d :\n", i + 1);
        printf("Somme des salaires de l'employe %d : %.2f\n", i + 1, somme[i]);

        }
    printf("\nSomme des salaires par mois :\n");
    for (j = 0; j < MOIS; j++) {
        printf("Mois %d : %.2f\n", j + 1, sommeMois[j]);
    }*/

/*    char Nom[20];
    printf("Entrez votre nom\n");
    scanf("%s",Nom);
    printf("Votre nom est: %s ",Nom);*/

char nom[20], nouveau[20] = {0},nouveau2[20] = {0};
int longueurChaine = 0, valeur = 0;
while (longueurChaine <= 5){
printf("Saisiser le nom\n");
scanf("%s",&nom);
printf("Saisiser le prenom\n");
scanf("%s",&nouveau);
valeur = strcmp (nom,nouveau);
//strcat(nom,nouveau);
//strcpy(nouveau, nom);

longueurChaine = strlen(nom);
if (longueurChaine <= 5){
    printf("Nom trop court\n");
}
}

//printf("le premier nom est : %s\n", nom);
//printf("le deuxieme nom est : %s\n", nouveau);
//printf("la fusion des deux noms est : %s\n",nom);
//printf("La chaine %s fait %d caracteres de long",nom , longueurChaine);
if(valeur == 0){
    printf("Les deux chaines sont egales\n");
}
else{
     printf("Les deux chaines sont differents\n",nom,nouveau);
}


    return 0;
}
