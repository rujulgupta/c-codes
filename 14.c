// WAP TO FIND a^b
#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    printf("Enter the value of base and power :");
    scanf("%d %d", &a,&b);
    printf("Power = %d",(int)pow(a,b));
    return 0;
}

/* 
Syntax of pow() function:
double power(double base, double power)
*/