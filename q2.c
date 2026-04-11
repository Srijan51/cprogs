#include<stdio.h>
int main(){
    float y;
    int x,n;
    printf("Enter the value of x and n ");
    scanf("%d%d",&x,&n);
    switch (n)
    {
    case 1:
        y=1+(x*x); 
        break;
    case 2:
        y=1+(x/n);
        break;
    case 3:
        y=1+(2*x);
        break;
    default:
        y=1+n*x;
        break;
    }
    printf("The value of y is %f\n",y);
    return 0;
}