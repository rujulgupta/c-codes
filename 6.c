#include <stdio.h>
int main()
{
    int a,b;
    int addition, subtratction, multipllication, remainder;
    printf("Enter two integers :\n");
    scanf("%d%d",&a,&b);
    addition = a+b;
    subtratction = a-b;
    multipllication = a*b;
    remainder = a%b;
    printf("addition: %d + %d = %d\n", a,b,addition);
    printf("subtraction: %d - %d = %d\n", a,b,subtratction);
    printf("multiplication: %d * %d = %d\n", a,b,multipllication);
    printf("remainder: %d % %d = %d\n", a,b,remainder);
    return 0;
}