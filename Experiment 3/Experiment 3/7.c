#include <stdio.h>
int searchInNearlySortedArray(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == key){
            return mid;
        } else if (mid > low && arr[mid - 1] == key){
            return mid - 1; 
        } else if (mid < high && arr[mid + 1] == key){
            return mid + 1; 
        }    
        if (key < arr[mid]){
            high = mid - 2;
        } else{
            low = mid + 2;
        }
    }
    return -1; 
}
int main(){
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    int result = searchInNearlySortedArray(arr, n, key);
    if (result != -1){
        printf("Element %d found at index %d\n", key, result);
    } else{
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
