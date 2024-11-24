#include <stdio.h>
int find_missing(int arr[], int n){
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }  
    return low + 1;
}
int main(){
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The missing number is: %d\n", find_missing(arr, n));
    return 0;
}
