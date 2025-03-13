#include<stdio.h>
#include<stdlib.h>

void afficher(){
    int i;
    printf ( "Les annes bixestiles de 1900 a 3000:\n");

    for (i = 1900; i<= 3000; i++){
      if(i%4==0 && (i%100 !=0 || i%400 == 0)){
        printf ( "%d\t",i);
    }
}

}

int main(){
    afficher ();
return 0;
}

