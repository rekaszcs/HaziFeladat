#include <stdio.h>

int valid_triangle(int a, int b, int c) {
    if (a > 0 && b > 0 && c > 0) {
        if ( a + b > c && a + c > b && c + b > a) {
            return 1;
        }
        else{
            return 0;
        }   
    }
}
int main() {
    int x, y, z;
    printf("Adja meg a haromszog 3 oldalat:");
    if(scanf("%d %d %d", &x , &y, &z) != 3) {
        return 0;
    }
    if (valid_triangle(x,y,z) == 1) {
        printf("A haromszog megszerkesztheto.\n");
    }
    else{
        printf("A haromszoget nem lehet megszerkeszteni.\n");
    }
    return 0;
}