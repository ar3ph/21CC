#include <stdio.h>
void increment(int *num) {
    num[0]++; // num[0] == *num
}
int main() {
    int i = 9;
    increment(&i);
    printf("ten is %d\n", i);
}