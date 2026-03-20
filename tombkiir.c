#include <stdio.h>

void vtomb(int tomb[], int meret) {
    for(int i = 0; i < meret; i++) {
        printf("%d", tomb[i]);

        if(i < meret - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int szamok[]={5, 12, 60, 96, 6};

    int n  = sizeof(szamok)/sizeof(szamok[0]);

    vtomb(szamok,n);

    return 0;
}