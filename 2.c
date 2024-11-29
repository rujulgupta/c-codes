#include <stdio.h>
int main ()
{
    int x, y, z;
    printf("Enter the value of x and y");
    scanf("%d%d", &x,&y);
    z=y;
    y=x;
    x=z;
    printf("value of x=%d", x);
    printf("value of y=%d", y);
    return 0;
}