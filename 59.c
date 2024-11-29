//WAP to copy the data from one array to another array
#include <stdio.h>
int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
        int arr1[size], arr2[size];
    printf("Enter %d elements for the first array: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<size; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements of the second array (copied from the first array):\n");
    for (int i=0; i<size; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
