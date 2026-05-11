#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void shuffle(int n, char tomb[]) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main() {
    srand(time(NULL));
    char jelszo[13];
    int hossz = rand() % 5 + 8; 

    
    jelszo[0] = 'a' + rand() % 26;               
    jelszo[1] = 'A' + rand() % 26;               
    jelszo[2] = '0' + rand() % 10;
    
    char *special = ".,;'";
    jelszo[3] = special[rand() % 4];                 

    
    for (int i = 4; i < hossz; i++) {
        jelszo[i] = 'a' + rand() % 26;
    }
    jelszo[hossz] = '\0';

    shuffle(hossz, jelszo);

    printf("Eros jelszo: %s\n", jelszo);

    return 0;
}