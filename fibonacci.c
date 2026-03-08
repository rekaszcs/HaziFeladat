#include <stdio.h>

int fibonacci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    
    int a = 0;
    int b = 1;
    int kovetkezo;

    for(int i = 2;i <= n;i++){
        kovetkezo = a+b;
        a=b;
        b=kovetkezo;
    }
    return b;

}

int main(){
    for(int i = 0; i < 100; i++){
        printf("%d. elem: %d\n",i+1, fibonacci);
    }
    return 0;
}