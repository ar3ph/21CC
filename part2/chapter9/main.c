#include<stdio.h>
#include<string.h>
int count_lines(char *instring) {
    int counter = 0;
    char *scratch, *txt, *delim = "\n";
    while ((txt = strtok_r(!counter ? instring : NULL, delim, &scratch)))
        ++counter;
    return counter;
}
int main() {
    char *ins = strdup("aaa\nbbbb\nccc"); // this is needed bc string literals are read-only
    int lines = count_lines(ins);
    printf("lines: %d", lines);
}