// wap to print the fibonacci series
#include <stdio.h>

int main(){
    int n,a=0,b=1,c;
    printf("Enter the value of N :");
    scanf("%d",&n);
    printf("%d %d", a,b);
    for (int i=3; i<=n ; i++)
    {
        c = a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    return 0;
}