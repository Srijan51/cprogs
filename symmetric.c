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
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf("Symmetric matrix\n");
    else
        printf("Not a Symmetric matrix\n");
}
