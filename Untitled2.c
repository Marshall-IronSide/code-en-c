#include<stdio.h>
#include<stdlib.h>

int successeur(int i){
    int temp = 0;
temp = i+1;
return temp;
}
int main(){
int a;
printf("Rentrez deux entier\n");
scanf("%i",&a);
c = successeur(a);
printf("Le successeur de %i est: \n %d",a,c);

return 0;
}
