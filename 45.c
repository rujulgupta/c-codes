// wap print the sum of series i.e sum = 1+2+3+.....+n
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum +i;
    }
    printf("Sum of series is %d",sum);
    return 0;
}