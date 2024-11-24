#include <stdio.h>
int findOddOccurringElement(int arr[], int low, int high){
    if (low == high){
        return arr[low];
    } 
    int mid = low + (high - low) / 2;
    if (mid % 2 == 1){
        mid--; 
    }
    if (arr[mid] == arr[mid + 1]){
        return findOddOccurringElement(arr, mid + 2, high);
    } else{
        return findOddOccurringElement(arr, low, mid);
    }
}
int main(){
    int arr[] = {1, 1, 2, 2, 3, 3, 5, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findOddOccurringElement(arr, 0, n - 1);
    printf("The odd occurring element is: %d\n", result);
    return 0;
}
