#include <stdio.h>

void factorial();

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    factorial(n);
    return 0;

}

void factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("The factorial is %d",fact);


}