///WAP to check whether the given year is leap year or not
#include <stdio.h>

int main(){
    int year;
    printf("Enter Year :");
    scanf("%d", &year);
    if(year%100 == 0)
    {
        if(year%400 == 0)
        printf("Input year is Leap Year");
        else
        printf("Input Year is not Leap Year");
    }
    else
        if (year%4 == 0)
        printf("Input year is Leap Year");
        else
        printf("Input year is not Leap Year");
        return 0;
}