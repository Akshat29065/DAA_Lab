#include <stdio.h>
int searchInRotatedArray(int arr[], int n, int key){
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == key){
            return mid;
        }
        if (arr[low] <= arr[mid]){       
            if (key >= arr[low] && key < arr[mid]){
                high = mid - 1; 
            } else{
                low = mid + 1; 
            }
        } else{     
            if (key > arr[mid] && key <= arr[high]){
                low = mid + 1;
            } else{
                high = mid - 1; 
            }
        }
    }
    return -1; 
}
int main(){
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    int result = searchInRotatedArray(arr, n, key);
    if (result != -1){
        printf("Element %d found at index %d\n", key, result);
    } else{
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
