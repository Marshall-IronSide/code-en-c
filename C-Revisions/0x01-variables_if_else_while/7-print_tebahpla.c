#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'z';
    while(c >= 'a'){
        putchar(c);
        c--;
    }
    
    return 0;
}