typedef struct point {
    double x, y;
} point;
typedef struct threepoint {
    struct point; // a ms extension
    double z;
} threepoint;
int main() {
    threepoint tp = {.x = 1.0, .y =2.0, .z=3.0};
}