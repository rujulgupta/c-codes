#include<stdio.h>
int main()
{
    float radius, area_of_circle, perimeter, side, perimeter_of_square;
    printf("enter the value of r");
    scanf("%f", &radius);
    printf("Enter the value of side");
    scanf("%f", &side);
    area_of_circle = 3.14*radius*radius;
    perimeter = 2*3.141*radius;
    perimeter_of_square = 4*side;
    printf(" the area of circle is = %f",area_of_circle);
    printf("\nthe perimeter of circle is = %f", perimeter);
    printf("\n the perimeter of square is = %f", perimeter_of_square );
    
    return 0;
}