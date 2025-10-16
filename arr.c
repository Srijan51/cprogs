#include <stdio.h>
int main(){
    int a[5];
    int n;
    for (int i=0;i<5;i++){
        printf("Enter the digit");
        scanf("%d",&n);
        a[i]=n;
    }
    for (int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}