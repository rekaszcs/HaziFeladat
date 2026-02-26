#include <stdio.h>
int main () {
    int osszeg = 0; 
    printf("ASCII tartotmany (32-126):\n");
    for (int i = 32; i <= 126; i++) {
        printf("%d: %c\n", i, i);
    }
    for ( char c = 'A'; c <= 'Z';c++) {
        osszeg += c;
    }
    printf("Angol abc nagybetuinek osszege: %d\n", osszeg);

    return 0;
}