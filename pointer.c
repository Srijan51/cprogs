#include <stdio.h>

int main() {
    int num = 42;       // Standard variable
    int *ptr = &num;    // Pointer 'ptr' holds the address of 'num'

    // 1. Printing the address
    printf("Address of num: %p\n", &num);
    printf("Value of ptr:   %p\n", ptr);

    // 2. Printing the value (Dereferencing)
    printf("Value of num:   %d\n", num);
    printf("Value via ptr:  %d\n", *ptr); // Go to address, get value

    return 0;
}