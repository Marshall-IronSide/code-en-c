#include <stdio.h>
#include <stdlib.h>

int main (){
    char c = 'a';
    char C = 'A';
    while(c <= 'z'){
        putchar(c);
        c++;
    }
    while(C <= 'Z'){
        putchar(C);
        C++;
    }
    putchar('\n');

    return 0;
}