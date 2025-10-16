#include <stdio.h>

void hcflcm();

int main(){
    int a,b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    hcflcm(a,b);
    return 0;
}

void hcflcm(int s,int p){
    int lcm,hcf;
    for(int i=1;i<=s;i++){
        if (s%i==0 || p%i==0){
            hcf=i;
        }
    }
    lcm=(s*p)/hcf;
    printf("The hcf is:%d\n",hcf);
    printf("The lcm is:%d",lcm);
}