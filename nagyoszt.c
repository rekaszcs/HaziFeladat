#include <stdio.h>

int nagyoszto (int n) {
    if(n < 2) {
        return 0;
    }

    for(int i = n / 2; i >= 1; i--){
        if(n % i == 0){
            return i;
        }
    }
    return 1;
}


int main(){
    printf("Az elso 50 szam legnagyobb osztoja:\n");

    for(int i = 1; i <= 50; i++){
        int oszto = nagyoszto(i);
        if(oszto == 0){
            printf("%d Nincs ertelmezve\n",i);
        }
        else{
            printf("%d: %d\n", i, oszto);
        }
        
    }
}
