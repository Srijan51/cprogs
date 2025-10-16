#include <stdio.h>

void rec(int n);
int s;
int main(){
    rec(0);

    return 0;

}
int a=0;
int b=1;

void rec(int n){
    if(n==10){
        return;
    }
    s=a+b;
    a=b;
    b=s;
    printf("%d ",s);
    rec(n+1);
    
}