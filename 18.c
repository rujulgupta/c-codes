#include <stdio.h>

int main(){
    int n, cube;
    printf("Enter Number :");
    scanf("%d",&n);
    if (n>0)
    {
        cube = n*n*n;
        printf("cube = %d", n*n*n);
    }
    return 0;
}