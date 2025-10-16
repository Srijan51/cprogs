#include <stdio.h>

int main() {
    int i;
    int ar[5];
    int max, max2;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &ar[i]);
    }

    // Initialize max and max2 properly
    if (ar[0] > ar[1]) {
        max = ar[0];
        max2 = ar[1];
    } else {
        max = ar[1];
        max2 = ar[0];
    }

    for (i = 2; i < 5; i++) {
        if (ar[i] > max) {
            max2 = max;
            max = ar[i];
        }
        
         else if (ar[i] > max2 && ar[i] != max) {
            max2 = ar[i];
        }
    }

    printf("The second largest number is: %d\n", max2);
    return 0;
}
