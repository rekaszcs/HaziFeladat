#include <stdio.h>
int is_even(int n){
    if(n % 2 == 0){
        return 1;
    }
    else {
        return 0;
    }
    
}

int is_odd(int n){
    if(n % 2 != 0){
        return 1;
    }
    else {
        return 0;
    }
}

/*int is_odd(int n){
   // return !is_even;
} */

int main(){
    int szamok[]={25,15,20,4,2,33};
    int i;

    printf("A szam paros vagy paratlan?\n");

    for(int i = 0;i < 5;i++){
        int n = szamok[i];
        printf("%d",n);
        if(is_even(n)){
            printf(" Paros (1)\n");
        }
        else {
            printf(" Paratlan (0)\n");
        }
    }
    return 0;
}