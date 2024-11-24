#include <stdio.h>
int findPeak(int arr[], int n){
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1])){
            return mid; 
        }
        if (mid > 0 && arr[mid] < arr[mid - 1]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1; 
}
int main(){
    int arr[] = {1, 3, 20, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = findPeak(arr, n);
    if (peakIndex != -1){
        printf("Peak element is %d at index %d\n", arr[peakIndex], peakIndex);
    } else{
        printf("No peak element found\n");
    }
    return 0;
}
