#include<stdio.h>
int main(){
    printf("Enter the character: ");
    char ch;
    scanf("%c", &ch);
    int asc=(int)ch;
    printf("The ASCII value of %c is %d\n", ch, asc);
    return 0;
}