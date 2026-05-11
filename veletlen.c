#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[]) {
    int veletlen = rand() % n;
    
    return tomb[veletlen];
}

int main() {
    srand(time(NULL));

    int szamok[] = {10, 20, 30, 40, 50};
    int n = 5;

    int valasztott = choice(n, szamok);
    
    printf("A tomb egy veletlen eleme: %d\n", valasztott);

    return 0;
}