#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int temps,heure,minutes,secondes;

    printf("saisir le temps en secondes\n");
    scanf("%i",&temps);

    heure = temps/3600;
    minutes = (temps%3600)/60;
    secondes = temps%60;

    printf("%ih %im %is\n",heure,minutes,secondes);

    return 0;
}