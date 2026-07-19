#include<stdio.h>
int main(){
    int a[2][3]={};
    printf("Enter 1st matrix\n");
    for(int i=0;i<2;i++){
        printf("Enter %d row elements\n",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    int b[3][2]={};
    printf("Enter 2st matrix\n");
    for(int i=0;i<2;i++){
        printf("Enter %d row elements\n",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    int c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=0;
            for(int k=0;k<=2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The multiplied array is\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}