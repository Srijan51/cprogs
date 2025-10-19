//1 - X²/2! + X⁴/4! - ....

#include<stdio.h>
#include <math.h> 

int factorial(int a);

int main(){
    int n,i,x,l;
    float sum;
    l=2;
    int k=2;
    sum=1.0;
    printf("Enter x");
    scanf("%d",&x);
    printf("Enter the no of terms");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(l%2==0){
            sum=sum-(pow(x,k))/factorial(k);
        }
        else{
            sum=sum+(pow(x,k))/factorial(k);
        }
        l=l+1;
        k=k+2;
    }
    printf("The sum is%f",sum);
    return 0;
}

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}