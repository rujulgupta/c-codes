// WAP to read a number from user and print the odd digit of that number 
#include<stdio.h>
int main()
{
    int num, sum=0, rem;
    printf("Enter Number :");
    scanf("%d", &num);
    while(num !=0)
    {
        rem = num%10;
        if(rem%2!=0)
        sum += rem;
        num = num/10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}