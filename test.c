#include<stdio.h>

int main(){
int i;
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr; // Points to arr[0] (10)
for(i=1; i<5; i++){
printf("%d ",*p);
p++;
}          // Now points to arr[1] (20)
printf("%d", *p);
return 0;
}