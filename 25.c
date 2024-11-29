//WAP TO CHECK WHETHER THE GIVEN NUMBER IS SINGLE DIGIT, TWO DIGIT, THREE DIGIT OR ,OR THEN 3 DIGIT
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 1 && number <=10) {
        printf("The number %d is a single-digit number.\n", number);
    } else if (number >= 10 && number < 100) {
        printf("The number %d is a two-digit number.\n", number);
    } else if (number >= 100 && number < 1000) {
        printf("The number %d is a three-digit number.\n", number);
    } else {
        printf("The number %d has more than three digits.\n", number);
    }

    return 0;
}