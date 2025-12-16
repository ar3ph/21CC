#include <stdio.h>


long long int fibonacci() {
    // this works bc static variables are only initiated once
    // _Thread_local is added in C11
    static _Thread_local long long first = 0;
    static _Thread_local long long second = 1;
    long long int out = first + second;
    first = second;
    second = out;
    return out;
}

int main() {
    for (int i = 0; i < 50; ++i) {
        printf("%lli\n", fibonacci());
    }
}