#include <stdio.h>
#include <stdlib.h>

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

    int count,i,nbreheures,tauxHoraire;
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
    printf("%d personnes ont un salaire inferieur au SMIG\n",count);


    return 0;
}
