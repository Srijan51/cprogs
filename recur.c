#include <stdio.h>

void rec(int n);

int main(){
    rec(5);
    return 0;

}

void rec(int n){
    if(n==0){
        return;
    }
    printf("Hello World\n");
    rec(n-1);
    
}