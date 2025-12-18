#include <stdio.h>
#include "main.h"
#define CONCAT(a, b) a ## b
#define blankcheck(a) {int aval = (#a[0] == '\0') ? -1: (a+0); printf("your input is %d\n", aval);}

int MY_NUMBER = 1;
int main() {
    int cd = 67;
    printf("cd is %d\n", CONCAT(c, d));
    blankcheck();
    blankcheck(67);
    blankcheck(cd);
    printf("my number is %d\n", MY_NUMBER);
    int a[10] = {};
    int const *b = a;
    a[0]  = 3;
    printf("b changed: %d\n", b[0]);
}