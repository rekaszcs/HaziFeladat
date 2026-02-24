#include <stdio.h>

int main() {
    int a, b;
    printf("Adja meg a teglalap oldalait: ");
    scanf("%d %d", &a, &b);

    int kerulet = 2 * (a + b);
    int terulet = a * b;

    printf("A teglalap kerulete: %d\n", kerulet);
    printf("A teglalap terulete: %d\n", terulet);

    return 0;
}
