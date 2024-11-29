#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    if (num1 >= num2 && num1 >= num3) {
   printf("The greatest number is num1");}
    else if (num2 >= num1 && num2 >= num3) {
   printf("The greatest number is num2");
    } else {
   printf("The greatest number is num3");
    }

    return 0;
}