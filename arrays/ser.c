#include <stdio.h>
int main(){
    float x[10],value;
    float total=0.0;
    for (int i=0;i<10;i++){
        printf("Enter a value");
        scanf("%f",&value);
        x[i]=value*value;
    }
    for (int i=0;i<10;i++){
        total=total+x[i];
    }
    for (int i=0;i<10;i++){
        printf("x[%d] = %f\n",i+1,x[i]);
    }
    printf("Total= %f",total);

    }
