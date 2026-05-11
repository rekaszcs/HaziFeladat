#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Auto {
    char marka[50];
    int evjarat;
    int sebesseg;
} Auto;

int main() {
    FILE *fajl = fopen("adatok.txt", "r");

    if (fajl == NULL) {
        printf("Nem letezik a fajl\n");
        return 1;
    }

    Auto autok[100];
    int db = 0;

    char *sor = NULL;
    size_t len = 0;
    ssize_t nread;

    while ((nread = getline(&sor, &len, fajl)) != -1) {
        if (sscanf(sor, "%s %d %d", autok[db].marka, &autok[db].evjarat, &autok[db].sebesseg) == 3) {
            db++;
        }
    }

    printf("Sorok szama: %d\n", db);

    char keresett[50];
    printf("Milyen markat keresunk? ");
    scanf("%s", keresett);

    int max_idx = -1;
    for (int i = 0; i < db; i++) {
        if (strcmp(autok[i].marka, keresett) == 0) {
            if (max_idx == -1 || autok[i].sebesseg > autok[max_idx].sebesseg) {
                max_idx = i;
            }
        }
    }

    if (max_idx != -1) {
        printf("Leggyorsabb %s: %d km/h (%d-es evjarat)\n", 
                autok[max_idx].marka, autok[max_idx].sebesseg, autok[max_idx].evjarat);
    } else {
        printf("Nincs talalat.\n");
    }

    free(sor); 
    fclose(fajl);

    return 0;
}