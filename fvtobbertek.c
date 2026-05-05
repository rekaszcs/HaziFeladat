#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void statisztika(int tomb[], int n, int *min, int *max, double *atlag) {
    *min = tomb[0];
    *max = tomb[0];
    double osszeg = 0;

    for (int i = 0; i < n; i++) {
        if (tomb[i] < *min) *min = tomb[i];
        if (tomb[i] > *max) *max = tomb[i];
        osszeg += tomb[i];
    }
    *atlag = osszeg / n;
}

int main() {
    srand(42); 

    int szamok[10];
    int legkisebb, legnagyobb;
    double atlag;

    printf("A tömb elemei: ");
    for (int i = 0; i < 10; i++) {
        szamok[i] = rand() % 90 + 10;
        printf("%d%s", szamok[i], i == 9 ? "" : ", ");
    }
    printf("\n");

    statisztika(szamok, 10, &legkisebb, &legnagyobb, &atlag);

    printf("Legkisebb elem: %d\n", legkisebb);
    printf("Legnagyobb elem: %d\n", legnagyobb);
    printf("Az elemek átlaga: %.1f\n", atlag);

    return 0;
}