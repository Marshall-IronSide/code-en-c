#include <stdio.h>
#include <stdlib.h>

int max(int i, int j){

if(i > j){
    return i;
}
else{
    return j;
}
}
int main(){

int a,b,c;
printf("Rentrez deux entier\n");
scanf("%i %i",&a,&b);
c = max(a,b);
printf("Le maximum entre %i et %i est: %i\n %d",a,b,c);

return 0;
}
