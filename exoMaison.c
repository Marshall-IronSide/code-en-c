#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nom[20], prenom[20] = {0},nouveau[20] = {0};
    int longueurChaine = 0, valeur = 0;
   
        printf("Saisiser le nom\n");
        scanf("%s",&nom);
        //printf("Saisiser le prenom\n");
        //scanf("%s",&prenom);
        //strncat ( nom , prenom , 3 );
        //printf("Le résultat est : %s\n",nom);

        strncpy ( nouveau , nom , 5 );
        printf("La chaine copie est : %s",nouveau);

}
