#include <stdio.h>
#include <stdlib.h>

int main (){
    int i = 0;
    while(i < 10){
        putchar(i + '0');
        i++;
    }
    putchar('\n');
    return 0;
}