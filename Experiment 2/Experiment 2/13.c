#include <stdio.h>
#include <limits.h>
void interchangeSecondBiggestSmallest(int *arr, int size) {
    if (size < 4) {
        printf("Array should have at least 4 elements.\n");
        return;
    }
    int firstSmallest, secondSmallest;
    int firstBiggest, secondBiggest;
    firstSmallest = secondSmallest = INT_MAX; 
    firstBiggest = secondBiggest = INT_MIN;   
    for (int i = 0; i < size; i++){
        if (arr[i] < firstSmallest){
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != firstSmallest){
            secondSmallest = arr[i];
        }

        if (arr[i] > firstBiggest){
            secondBiggest = firstBiggest;
            firstBiggest = arr[i];
        } else if (arr[i] > secondBiggest && arr[i] != firstBiggest){
            secondBiggest = arr[i];
        }
    }
    if (secondSmallest == INT_MAX || secondBiggest == INT_MIN){
        printf("Second smallest or second biggest not found.\n");
        return;
    }
    for (int i = 0; i < size; i++){
        if (arr[i] == secondSmallest){
            arr[i] = secondBiggest;
        } else if (arr[i] == secondBiggest){
            arr[i] = secondSmallest;
        }
    }
}
int main(){
    int arr[] = {5, 1, 9, 3, 7, 6, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    interchangeSecondBiggestSmallest(arr, size);
    printf("Array after interchanging second biggest and second smallest: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
