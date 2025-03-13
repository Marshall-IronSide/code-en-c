#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    int i =0;
    if (a > b) {
        i= a;
    }
    else {
        i = b;
    }
printf("Le maximum entre est : %d\n", i);
if(i > 5)
}

int main() {
    int x, y, A, B, U, V;

    printf("Entrez deux nombres entiers x et y : ");
    scanf("%d %d", &x, &y);

    A = x+y;
    B = x*y;

    U = max(A, B);
    V = max(U, 5);

    return 0;
}
