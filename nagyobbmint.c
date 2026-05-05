#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *bemenet = fopen("in.txt", "r");
    if (bemenet == NULL) {
        fprintf(stderr, "Hiba! Az in.txt nem nyitható meg!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    FILE *kimenet = fopen("out.txt", "w");
    if (kimenet == NULL) {
        fprintf(stderr, "Hiba! Az out.txt nem hozható létre!\n");
        fclose(bemenet);
        return 1;
    }

    printf("# 0,5-nél nagyobb számok szűrése...\n");

    double szam;
    int darab = 0;


    while (fscanf(bemenet, "%lf", &szam) != EOF) {
        if (szam > 0.5) {
            fprintf(kimenet, "%lf\n", szam);
            darab++;
        }
    }

    printf("# szűrés vége\n");

    fclose(bemenet);
    fclose(kimenet);
    printf("# out.txt bezárva\n");

    printf("# out.txt-be kiírt számok mennyisége: %d db\n", darab);

    return 0;
}