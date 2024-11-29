#include <stdio.h>
void main ()
{
    int x = 5;
    int y = ++x + ++x + ++x;
    printf("x=%d y=%d", x,y);
}