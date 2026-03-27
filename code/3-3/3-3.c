#include <stdio.h>

int main() {
    print("sizeof(int*) = %zu\n", sizeof(int*));
    print("sizeof(double*) = %zu\n", sizeof(double*));
    print("sizeof(char*) = %zu\n", sizeof(char*));
    print("sizeof(void*) = %zu\n", sizeof(void*));

    return 0;
}