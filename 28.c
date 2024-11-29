//WAP to take day number as an input and print the day name corresponding to that day number
#include <stdio.h>

int main() {
    int day;
    printf("Enter day number : ");
    scanf("%d", &day);
    switch(day) {
        case 1:
            printf("Day 1: Sunday\n");
            break;
        case 2:
            printf("Day 2: Monday\n");
            break;
        case 3:
            printf("Day 3: Tuesday\n");
            break;
        case 4:
            printf("Day 4: Wednesday\n");
            break;
        case 5:
            printf("Day 5: Thursday\n");
            break;
        case 6:
            printf("Day 6: Friday\n");
            break;
        case 7:
            printf("Day 7: Saturday\n");
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
            break;
    }
    return 0;
}
