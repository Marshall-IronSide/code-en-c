#include<stdio.h>
#include<stdlib.h>

int somme(int i,int j){
    int temp = 0;
temp = i+j;
return temp;
}
int main(){
int a,b,c;
printf("Rentrez deux entier\n");
scanf("%i %i",&b,&a);
c = somme(a,b);
printf("La somme est: \n %d",c);

return 0;
}
