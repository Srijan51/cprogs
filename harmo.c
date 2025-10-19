//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n

#include<stdio.h>

int main(){
    int i,n;
    printf("Enter n");
    scanf("%d",&n);
    float sum=1.0;
    for(i=2;i<=n;i++){
        sum=sum+(1.0/i);

    }
    printf("The sum is%f",sum);
    return 0;
}