// WAP to print area of circle, square and rectangle on the basis of user input
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float area;

    printf("Choose the shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Circle
            {
                float radius;
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = M_PI * radius * radius; // Area of circle = π * r^2
                printf("Area of the circle: %.2f\n", area);
                break;
            }
        case 2: // Square
            {
                float side;
                printf("Enter the side length of the square: ");
                scanf("%f", &side);
                area = side * side; // Area of square = side^2
                printf("Area of the square: %.2f\n", area);
                break;
            }
        case 3: // Rectangle
            {
                float length, width;
                printf("Enter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                area = length * width; // Area of rectangle = length * width
                printf("Area of the rectangle: %.2f\n", area);
                break;
            }
        default:
            printf("Invalid choice! Please select a valid option.\n");
            break;
    }

    return 0;
}