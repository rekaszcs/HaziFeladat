#include <stdio.h>

int contains(int n, int tomb[], int keresett) {
    for(int i = 0; i < n; i++) {
        if (tomb[i] == keresett) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int szamok[]= {4, 6, 8, 89, 53, 26};
    int meret = 6;
    int keresett = 6;
    int keresett1 = 80;

    if (contains(meret, szamok, keresett)) {
        printf("A(z) %d elem szerepel a tombben.\n", keresett);
    } 
    else {
        printf("A(z) %d elem NEM szerepel a tombben.\n", keresett);
    }

    if (contains(meret, szamok, keresett1)) {
        printf("A(z) %d elem szerepel a tombben.\n", keresett1);
    } 
    else {
        printf("A(z) %d elem nem szerepel a tombben.\n", keresett1);

    }
}