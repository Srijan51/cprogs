#include<stdio.h>
int main(){
    printf("Enter the order ");
    int n;
    scanf("%d",&n);
    int a[n][n];
    int flag=0;
    printf("Enter the elements ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]!=1){
                    flag=1;
                    break;
                }
            }
            else{
                if(a[i][j]!=0){
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0)
        printf("It is an identity matrix\n");
    else
        printf("It is not an identity matrix\n");
}
