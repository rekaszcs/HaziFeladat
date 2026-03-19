#include <stdio.h>

int tomb_sort(int n, int tomb[]) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if (tomb[i] > tomb[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int pelda[] = {5, 8, 9, 36, 42};
    int meret = 5;

    if (tomb_sort(meret, pelda)) {
        printf("A tomb rendezett.\n");
    } else {
        printf("A tomb nem rendezett.\n");
    }

    return 0;
}