#include <stdio.h>

int main(){
    int n;
    int eredeti[100];
    int masolat[100];

    printf("Hany darab szamot akar bevinni?\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d szam: ", i + 1);
        scanf("%d", &eredeti[i]);
    }

    for(int i = 0; i < n; i++){
        if(eredeti[i]<0){
            masolat[i] = -eredeti[i];
        } else {
            masolat[i] = eredeti[i];
        }
    }

    printf("\nA bevitt tomb abszolutertekei : ");
    for(int i = 0; i < n; i++){
        printf("%d", masolat[i]);
        if (i < n - 1) printf(", ");
        }
    

    printf("A megadott szamok: ");
    for(int i = 0; i < n;i++){
        printf("%d", eredeti[i]);
        if (i < n - 1) printf(", ");
        }
    
    printf("\n");

    return 0;
}