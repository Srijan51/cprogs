#include <stdio.h>

int main() {
    int i, j, k, n = 4;

    for(i = 1; i <= n; i++) {

        // spaces
        for(j = 1; j <= n-i; j++)
            printf("  ");

        // increasing numbers
        for(j = i; j <= 2*i-1; j++)
            printf("%d ", j);

        // decreasing numbers
        for(j = 2*i-2; j >= i; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}