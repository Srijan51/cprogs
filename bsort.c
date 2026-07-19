#include<stdio.h>
int main(){
    int arr[5]={};
    printf("Enter the elements\n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    int temp=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
    }
