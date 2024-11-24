#include <stdio.h>
int findFirstOccurrence(int arr[], int n, int key){
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == key){
            result = mid;    
            high = mid - 1;
        } else if (arr[mid] < key){
            low = mid + 1;   
        } else{
            high = mid - 1;  
        }
    }
    return result;
}
int findLastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;    
            low = mid + 1;
        } else if (arr[mid] < key) {
            low = mid + 1;  
        } else {
            high = mid - 1;  
        }
    }
    return result;
}
int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int first = findFirstOccurrence(arr, n, key);
    int last = findLastOccurrence(arr, n, key);
    if (first != -1){
        printf("First occurrence of %d is at index %d\n", key, first);
    } else{
        printf("%d is not present in the array\n", key);
    }
    if (last != -1){
        printf("Last occurrence of %d is at index %d\n", key, last);
    } else{
        printf("%d is not present in the array\n", key);
    }
    return 0;
}
