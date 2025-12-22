#include<string.h>
#include<math.h>
typedef struct Student {
    int num;
    char* name;
} Student;
int main() {
    double list1[] = {1.1, 2.2, 3.3, NAN}; // allocated, sizeof gives whole list's size
    double *list2 = (double[]) {1.2, 2.3, 3.4}; // sizeof(list2) == sizeof(double*)
    Student s = {.num=1, .name="hello"};
    
    int l1[20]; // auto initiates with 0s
    


    int len = 20;
    int ll[len];
    memset(ll, 0, 20*sizeof(int)); // has to be initiated with memset
}