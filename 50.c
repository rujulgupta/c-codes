// WAP to perform the sum  of even digits
#include <stdio.h>
int main() 
{
    int number, sum = 0, digit;
    printf("Enter a even number: ");
    scanf("%d", &number);
    while (number != 0) 
    {
        digit = number % 10; 
        if (digit %2 == 0) 
        { 
            sum += digit; 
        }
        number /= 10; 
    }
    printf("Sum of even digits: %d\n", sum);
    return 0;
}