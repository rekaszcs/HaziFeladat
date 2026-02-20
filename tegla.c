#include <stdio.h>

int main() {
    int a, b;
    printf("Tegla oldalai: ");
    scanf("%d %d", &a, &b);

    int kerulet = 2 * (a + b);
    int terulet = a * b;

    printf("Kerulet: %d\n", kerulet);
    printf("Terulet: %d\n", terulet);

    return 0;
}