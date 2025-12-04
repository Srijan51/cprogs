#include<stdio.h>
int main(){
    int days, seconds, hours, minutes, remaining_seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    // There are 24 * 60 * 60 = 86400 seconds in a day
    days = seconds / 86400;
    remaining_seconds = seconds % 86400;

    // There are 60 * 60 = 3600 seconds in an hour
    hours = remaining_seconds / 3600;
    remaining_seconds = remaining_seconds % 3600;

    // There are 60 seconds in a minute
    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    printf("%d seconds is equivalent to %d days, %d hours, %d minutes, and %d seconds.\n", seconds, days, hours, minutes, remaining_seconds);
    return 0;
}