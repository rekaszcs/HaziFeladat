#include <stdio.h>

int main() {
    int cellak[601];
    int i, j;

    for (i = 1; i <= 600; i++) {
        cellak[i] = 0;
    }

    for (i = 1; i <= 600; i++) {
        for (j = i; j <= 600; j += i) {
            if (cellak[j] == 0) {
                cellak[j] = 1; 
            } else {
                cellak[j] = 0; 
            }
        }
    }
    printf("A nyitva maradt cellak szamai:\n");
    for (i = 1; i <= 600; i++) {
        if (cellak[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}