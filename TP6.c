#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salaireBrut,retenue,SalairNet, prime;
    int nombreHeures,nombreEnfant,tauxHoraire;

    printf("Entrez le nombre d'heures effectues\n");
    scanf("%i",&nombreHeures);
    printf("Entrez le taux horaire\n");
    scanf("%i",&tauxHoraire);
    salaireBrut = nombreHeures*tauxHoraire;
    retenue = salaireBrut*0.1;
    printf("Combien d'enfants avez vous ?\n");
    scanf("%i",&nombreEnfant);
   /* if( nombreEnfant == 1){
        SalairNet = salaireBrut-retenue+9000;
    }
    else if(nombreEnfant == 2){
            prime = 19000;
            SalairNet = salaireBrut-retenue+prime;
            printf(" Salaire Brute: %.2f\n",salaireBrut);
            printf(" Retenue: %.2f\n",retenue);
            printf(" Prime: %.2f\n",prime);
            printf(" Salaire net: %.2f\n",SalairNet);

    }
    else if (nombreEnfant == 3){
        prime = 33000;
        SalairNet = salaireBrut-retenue+prime;
        printf(" Salaire Brute: %.2f\n",salaireBrut);
        printf(" Retenue: %.2f\n",retenue);
        printf(" Prime: %.2f\n",prime);
        printf(" Salaire net: %.2f\n",SalairNet);

    }
    else if (nombreEnfant<=0){
        printf("Vous ne beficier pas d'une prime\n");
        prime = 0;
            SalairNet = salaireBrut-retenue+prime;
            printf(" Salaire Brute: %.2f\n",salaireBrut);
            printf(" Retenue: %.2f\n",retenue);
            printf(" Prime: %.2f\n",prime);
            printf(" Salaire net: %.2f\n",SalairNet);
    }
    else{
        prime = 17000*(nombreEnfant-3)+33000;
        SalairNet = salaireBrut-retenue+prime;
        printf(" Salaire Brute: %.2f\n",salaireBrut);
        printf(" Retenue: %.2f\n",retenue);
        printf(" Prime: %.2f\n",prime);
        printf(" Salaire net: %.2f\n",SalairNet);
    }*/

    switch(nombreEnfant){
        case 0: printf("Vous ne beficier pas d'une prime\n");
        prime = 0;
        break;
        case 1:SalairNet = salaireBrut-retenue+9000;
        break;
        case 2:prime = 19000;
        break;
        case 3:prime = 33000;
        break;
        default: prime = 17000*(nombreEnfant-3)+33000;

    }
    SalairNet = salaireBrut-retenue+prime;
        printf(" Salaire Brute: %.2f\n",salaireBrut);
        printf(" Retenue: %.2f\n",retenue);
        printf(" Prime: %.2f\n",prime);
        printf(" Salaire net: %.2f\n",SalairNet);

    return 0;
}
