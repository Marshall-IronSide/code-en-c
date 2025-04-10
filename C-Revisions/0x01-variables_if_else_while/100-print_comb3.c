#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, j = 1;
    while(i < 10){
        j = i + 1;
        while(j < 10){
            putchar(i + '0');
            putchar(j + '0');
            if(i != 8 || j != 9){
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }

    return 0;
}