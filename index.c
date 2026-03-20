#include <stdio.h>

int sindex(int n, int tomb[], int keresett) {
    for(int i = 0; i < n; i++) {
        if (tomb[i] == keresett) {
            return i;
        }
    }
    return -1;
}

int main() {
    int szamok[] = {2, 5, 19, 62, 85, 90};
    int meret = 6;
    int keresett = 85;
    int keresett1 = 66;

    int hely = sindex(meret, szamok, keresett);

    if (hely != -1) {
        printf("A keresett szam %d az indexen van: %d\n", keresett, hely);
    } else {
        printf("A szam nem talalhato a tombben.\n");
    }

    int hely1 = sindex(meret, szamok, keresett1);

    if (hely1 != -1) {
        printf("A keresett szam %d az indexen van: %d\n", keresett1, hely);
    } else {
        printf("A szam nem talalhato a tombben.\n");
    }
}