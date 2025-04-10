#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'a';
    while(c <= 'z'){
        if(c != 'q' && c != 'e'){
            putchar(c);
        }
        c++;
    }
}