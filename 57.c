//WAP to find the sum of all the elements of an array
#include <stdio.h>
int main() {
    int size, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements in the array: %d\n", sum);
    return 0;
}