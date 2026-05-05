#include <stdio.h>
#include <stdlib.h>

struct Eredmenyek {
    int min;
    int max;
    double atlag;
};


struct Eredmenyek szamol(int tomb[], int n) {
    struct Eredmenyek valasz; 
    
    valasz.min = tomb[0];
    valasz.max = tomb[0];
    double osszeg = 0;

    for (int i = 0; i < n; i++) {
        if (tomb[i] < valasz.min) valasz.min = tomb[i];
        if (tomb[i] > valasz.max) valasz.max = tomb[i];
        osszeg += tomb[i];
    }
    valasz.atlag = osszeg / n;

    return valasz; 
}

int main() {
    srand(42); 
    int szamok[10];

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        szamok[i] = rand() % 90 + 10;
        printf("%d%s", szamok[i], i == 9 ? "" : ", ");
    }
    printf("\n");

    struct Eredmenyek vegleges = szamol(szamok, 10);

    printf("Legkisebb elem: %d\n", vegleges.min);
    printf("Legnagyobb elem: %d\n", vegleges.max);
    printf("Az elemek átlaga: %.1f\n", vegleges.atlag);

    return 0;
}