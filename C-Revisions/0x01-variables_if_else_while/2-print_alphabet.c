#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'a';
    while(c <= 'z'){
        putchar(c);
        c++;
    }
    putchar('\n');
    return 0;
}