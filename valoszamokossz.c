#include <stdio.h>
#include <stdlib.h>

int main() {
    char *fajlnev = "valos_szamok.txt";
    FILE *f = fopen(fajlnev, "r");

    if (f == NULL) {
        fprintf(stderr, "Hiba! Nem sikerult megnyitni a %s fajlt!\n", fajlnev);
        return 1;
    }

    double szam;
    double osszeg = 0.0;

    while (fscanf(f, "%lf", &szam) != EOF) {
        osszeg += szam;
    }

    fclose(f);

    printf("%.20lf\n", osszeg);

    return 0;
}