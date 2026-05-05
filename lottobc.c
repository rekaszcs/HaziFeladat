#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, also, felso;

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);
    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    int szamok[n];
    int db = 0;

    srand(time(NULL));
    while (db < n) {
        int uj_szam = rand() % (felso - also + 1) + also;
        
        
        int volt_mar = 0;
        for (int i = 0; i < db; i++) {
            if (szamok[i] == uj_szam) {
                volt_mar = 1;
                break;
            }
        }
        
        
        if (!volt_mar) {
            szamok[db] = uj_szam;
            db++;
        }
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (szamok[j] > szamok[j + 1]) {
                int seged = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = seged;
            }
        }
    }

    printf("A generált számok:");

    for (int i = 0; i < n; i++) {
        printf(" %d", szamok[i]);
    }
    puts("\n");

    return 0;
}