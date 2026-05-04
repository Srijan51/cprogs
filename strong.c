#include <stdio.h>

int main() {
    int n,d;
    int sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    int a=n;
    while(n>0){
        d=n%10;
        int fact=1;
        for(int i=1;i<=d;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n/=10;
    }
    if(a==sum)
        printf("%d is a strong number\n",a);
    else
        printf("%d is not a strong number\n",a);
    return 0;
}