#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;

    while (i <= 9) {
        putchar(i + '0'); // Print the digit

        if (i != 9) { // If it's not the last digit, print ", "
            putchar(','); // Print comma
            putchar(' '); // Print space
        }
        i++;
    }

    putchar('\n'); // Print newline at the end
    return 0;
}