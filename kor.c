#include <stdio.h>
#include <math.h>

int main() {
    double r;
    printf("Adja meg a sugarat: ");
    scanf("%lf", &r);

    //                   vagy M_PI
    double kerulet = 2 * acos(-1) * r;
    double terulet = acos(-1) * r * r;


    printf("A kor kerulete: %.2lf\n", kerulet);
    printf("A kor terulete: %.2lf\n", terulet);


    return 0;
}
