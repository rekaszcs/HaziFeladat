#include <stdio.h>
#include <stdlib.h>

int get_number_of_lines(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        return -1;
    }

    int sorok = 0;
    int c;
    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            sorok++;
        }
    }

    fclose(f);
    return sorok;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    int eredmeny = get_number_of_lines(argv[1]);

    if (eredmeny == -1) {
        fprintf(stderr, "Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 1;
    }

    printf("%d\n", eredmeny);

    return 0;
}