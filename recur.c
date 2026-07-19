#include <stdio.h>

int rec(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d",rec(n));
    
    return 0;

}

int rec(int n){
    int sum=0;
    if(n==1)
        return 1;
    else{
        return n+rec(n-1);
    }
    
}