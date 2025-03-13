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
int a,c;
printf("Rentrez deux entier\n");
scanf("%i",&a);
c = factoriel(a);
printf("Le factoriel de %i est: \n %d",a,c);

return 0;
}
