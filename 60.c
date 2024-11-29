#include<stdio.h>
int main()
{
    int arr[4][3]={{11,67,34},{69,34,22},{45,89,74},{58,77,44}};
    //int arr[4][3]={{11,67,34},{69,34,22},{45,89,74},{58,77,44}};
    printf("Array elements are : \n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++){
            printf("%d", arr[i][j]);
        
        }
        printf("\n");

    }
}