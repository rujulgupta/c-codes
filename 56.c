//WAP to display the elements of an array in reverse order
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order: ");
    for (int i=n-1;i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}