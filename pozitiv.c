#include <stdio.h>

void absz(int tomb[], int meret){
    for(int i = 1; i < meret; i++){
        if(tomb[i]<0){
            tomb[i] = -tomb[i];
        }
    }
}

int main(){
    int szamok[]={3,4,-5,-24,-10};
    int n = sizeof(szamok)/sizeof(szamok[0]);

    printf("Eredeti tomb: ");
    for(int i = 0; i < n;i++){
        printf("%d ",szamok[i]);
    }
    printf("\n");

    absz(szamok,n);

    printf("Modositott tomb: ");
    for(int i = 0; i < n;i++){
        printf("%d ",szamok[i]);
    }
    printf("\n");

    return 0;
}
