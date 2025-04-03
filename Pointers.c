#include<stdio.h>
#include<stdlib.h>

void permut(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
int main(){
    int x,y;
    printf("Entrez x et y\n");
    scanf("%d %d",&x,&y);
    printf("Avant permutation x = %d et y = %d\n",x,y);
    permut(&x,&y);
    printf("Apres permutation x = %d et y = %d\n",x,y);

    return 0;
}
