#include <stdio.h>
typedef struct point {
    int x, y;
    void (*print)(struct point*);
} point;
void print_point(point* p) {
    printf("x %d, y %d\n", p->x, p->y);
}
int main() {
    point p = {.x=1, .y=2, .print=print_point};
    p.print(&p);
}