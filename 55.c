// WAP to read and display the elements of an array 
#include<stdio.h>
int main ()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements : ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array elements are : ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}