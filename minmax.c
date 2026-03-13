#include <stdio.h>

int mintomb(int tomb[], int meret){
    int legkisebb = tomb[0];
    for(int i = 1; i < meret; i++){
        if(tomb[i] < legkisebb){
            legkisebb = tomb[i];
        }
    }
    return legkisebb;
}

int maxtomb(int tomb[], int meret){
    int legnagyobb = tomb[0];
    for(int i = 1; i < meret; i++){
        if(tomb[i] > legnagyobb){
            legnagyobb = tomb[i];
        }
    }
    return legnagyobb;
}

int main(){
    int szamok[] = {6,32,94,17,50};
    int n = sizeof(szamok) / sizeof(szamok[0]);
    int min = mintomb(szamok,n);
    int max = maxtomb(szamok,n);

    printf("A tomb elemei: \n");
    for(int i = 0; i<n; i++){
        printf("%d",szamok[i]);
    }

    printf("A tomb legkisebb szama: %d\n",min);
    printf("A tomb legnagyobb szama: %d\n",max);


    return 0;
}