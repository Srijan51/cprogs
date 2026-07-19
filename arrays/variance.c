#include<stdio.h>
#include<math.h>
int main(){
    int a[5]={};
    int sum=0;
    printf("Enter the numbers\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    float avg=sum/5.0;
    printf("The average is %f\n",avg);
    float var=0;
    for(int i=0;i<5;i++){
        var=var+((a[i]-avg)*(a[i]-avg));
    }
    var=var/5.0;
    printf("The variance is %f\n",var);
    float sd=pow(var,0.5);
    printf("The standard deviation is %f\n",sd);
    return 0;
}