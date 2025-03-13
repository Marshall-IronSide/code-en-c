#include <stdio.h>
#include <stdlib.h>

void trier(int a, int b, int c, int resultat[3]) {
    int temp;
    if (a > b) {
            temp = a;
            a = b;
            b = temp;
    }
    if (a > c) {
     temp = a;
     a = c;
     c = temp;
      }
    if (b > c) {
     temp = b;
     b = c;
     c = temp;
     }

    resultat[0] = a;
    resultat[1] = b;
    resultat[2] = c;
}

int main() {
    int v1, v2, v3;
    int resultat[3];
    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &v1, &v2, &v3);

    trier(v1, v2, v3, resultat);

    v1 = resultat[0];
    v2 = resultat[1];
    v3 = resultat[2];

    printf("Apres permutation : %d %d %d\n", v1, v2, v3);
    return 0;
}
