#include<stdio.h>
int main(){
    int a=0,b=1;
    int next=0;
    int n;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
}