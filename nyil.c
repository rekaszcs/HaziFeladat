#include <stdio.h>

int main () {
    int n;
    printf("Irjon be egy pozitiv egesz szamot: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" -> ");
        }
    }
    return 0;
}