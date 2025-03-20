
#include<stdio.h>
#include<stdlib.h>

int factoriel(int a){
    int i,temp = 1;
    for(i = 1; i<= a; i++){
    temp = temp*i;
    }
    return temp;
}
int main(){
int a,b,c,comb;
while(a<b){
printf("Rentrez successivement deux entier a et b a>b\n");
scanf("%i %i",&a,&b);
if( a< b){
    printf("a ne peut pas etre inferieur a b\n");
}
}
c = a-b;
comb = factoriel(a) / (factoriel(b) * factoriel(c));
printf("La combinaison de %i et de %i est: \n %d",a,b,comb);

return 0;
}
