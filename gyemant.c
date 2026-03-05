#include <stdio.h>
int main (){
    int n;
    printf("Irja be a gyemant magassagat: ");
    scanf("%d",&n);
    
    if ( n <=0 || n % 2 == 0) {
        printf("Hiba: Adj meg pozitiv paratlan szamot!\n");
        return 1;
    } 
    int m = n / 2;

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j< m - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i+1; j++) {
            printf("*");
        }
        printf("\n");
    } 
    for (int i = m-1; i >= 0; i--) {
        for (int j = 0; j < m- i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
