// wap to print the table of given number
#include <stdio.h>

int main(){
    int a,n;
    printf("Enter any Number \n");
    scanf("%d",&a);
    for (n=1 ;n<=10;n++)
    {
        printf("%d*%d = %d\n",a,n,a*n);
    }
    return 0;
}