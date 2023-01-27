#include <stdio.h>
#include <conio.h>

int main() {
    FILE *inp = fopen("INPUT.txt", "r");
    FILE *out = fopen("OUTPUT.txt", "w");
    char P = getc(inp);
    while (P != EOF) {
        putc(P, out);
        P = getc(inp);
    }
    fclose(inp);
    fclose(out);
    return 0;
}