#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    for(int i=1;i<=4;i++){
        a=i;
        for(int k=1;k<=4-i;k++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}