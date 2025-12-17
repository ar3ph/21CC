#include <stdio.h>
int main() {
    enum directions {NORTH, SOUTH, EAST, WEST};
    printf("0 is NORTH: %d\n", NORTH == 0);
    
    printf("3/2 is %f\n", 3/2.); // use float point

    printf("hello\n");
    // don't bother to return 0, it returns 0
}