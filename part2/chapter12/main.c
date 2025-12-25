#include <omp.h>
#include <stdio.h>


int main() {
    omp_set_num_threads(8);
    #pragma omp parallel for
    for (int i = 0; i < 10; ++i) {
        printf("number is %d\n", i);
    }
    #pragma omp parallel sections
    {
        #pragma omp section
        {
            printf("Starting UI\n");
        }
        
        #pragma omp section
        {
            printf("starting backend\n");
        }
    }
    int x = 0;
    #pragma omp parallel for reduction(+:x)
    for (int i = 0; i < 10; ++i) ++x;
    printf("x is %d (should be 10)\n", x);

    static int y = 0;
    #pragma omp threadprivate(y)
    #pragma omp parallel for
    for (int i = 0; i < 10; ++i) ++y;

    printf("y is %d (should not be 10)\n", y);

}