#include <stdio.h>

#define SIZE 26

void fill_char_array(char c[]) {
    int j = 0;
    for( int i = (int)'a'; i <= (int)'z'; i++) {
        c[j] = (char)i;
        j = j + 1;
    }
}

int main() {
    char abc[SIZE];

    fill_char_array(abc);

    for (int i = 0; i < SIZE; i++) {
        printf("%c ", abc[i]);
    }

    return 0;
}
