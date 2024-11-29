#include<stdio.h>
void main ()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    (n%2==0)? printf("Number is Even "): printf("Number is odd");
}