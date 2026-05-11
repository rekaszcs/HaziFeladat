#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Hasznalat: %s <sorok szama> <min hossz> <max hossz>\n", argv[0]);
        return 1;
    }

    int sorok = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);

    srand(time(NULL));

    for (int i = 0; i < sorok; i++) {
        int hossz = rand() % (max - min + 1) + min;

        for (int j = 0; j < hossz; j++) {
            putchar(rand() % (126 - 33 + 1) + 33);
        }
        putchar('\n');
    }

    return 0;
}