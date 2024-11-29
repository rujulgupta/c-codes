// wap to print the factorial
#include <stdio.h>

int main(){
    int n,fact=1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for (int i=n; i>=1 ; i--)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
    return 0;
}