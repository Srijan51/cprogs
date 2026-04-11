#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,x1,x2,sq;
    printf("Enter a, b, c ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("The roots are real and different\n");
        printf("The roots are %.2f and %.2f\n",x1,x2);
    }
    else if(d==0){
        x1=-b/(2*a);
        x2=x1;
        printf("The roots are real and equal\n");
        printf("The roots are %.2f and %.2f\n",x1,x2);
    }
    else{
        x1=-b/(2*a);
        sq=sqrt(-d)/(2*a);
        printf("The roots are imaginary\n");
        printf("The root are %.2f +- %.2fi",x1,sq);
    }
    return 0;
    }