#include<stdio.h>
int main(){
    int arr[5]={};
    printf("Enter the elements\n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched\n");
    int n;
    scanf("%d",&n);
    int left=0;
    int right=4;
    int mid=0;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==n){
            printf("Element found at %d position",mid+1);
            break;
        }
        else if(n<arr[mid])
            right=mid-1;
        else if(n>arr[mid])
            left=mid+1;
    }


}