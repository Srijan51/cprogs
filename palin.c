#include<stdio.h>

void pal();

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    pal(n);
    return 0;
}

void pal(int a){
    int d;
    int rev=0;
    int b=a;
    while(a>0){
        d=a%10;
        rev=rev*10+d;
        a=a/10;
    }
    if(b==rev){
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not palindrome\n");
    }
}