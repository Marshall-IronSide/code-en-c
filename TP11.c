#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    char sexe;

    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez votre sexe (M ou F) : ");
    scanf(" %c", &sexe);

    if ((sexe == 'M' && age > 20) || (sexe == 'F' && age >= 18 && age < 35)){
        printf("L'habitant est imposable\n");
    } else {
        printf("L'habitant est non imposable\n");
    }

    return 0;
}
