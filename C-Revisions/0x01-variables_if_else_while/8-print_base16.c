#include <stdio.h>
#include <stdlib.h>

int main (){
    int i = 0;
    while(i < 16){
        if(i < 10){
            putchar(i + '0');
        }else{
            putchar(i - 10 + 'a');
        }
        i++;
    }
    putchar('\n');
    return 0;
}