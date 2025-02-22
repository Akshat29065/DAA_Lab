#include <stdio.h>
int findRotations(int arr[], int n){
    int low = 0, high = n - 1;
    while (low <= high){
        if (arr[low] <= arr[high]){
            return low;
        }
        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }
        if (arr[mid] >= arr[low]){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rotations = findRotations(arr, n);
    printf("Number of rotations: %d\n", rotations);
    return 0;
}
