#include <stdio.h>

    int main(){
        int osszeg = 0;

        for(int i =1;i <= 100;i++) {
            osszeg += i;
        }

        printf("A szamok osszege 1-tol 100-ig: %d\n", osszeg);

        return 0;

    }