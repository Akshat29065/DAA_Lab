#include <stdio.h>
int findFloor(int arr[], int n, int key){
    int low = 0, high = n - 1;
    int floor = -1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == key){
            return arr[mid]; 
        } else if (arr[mid] < key){
            floor = arr[mid]; 
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return floor;
}
int findCeil(int arr[], int n, int key){
    int low = 0, high = n - 1;
    int ceil = -1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == key){
            return arr[mid];
        } else if (arr[mid] < key){
            low = mid + 1; 
        } else{
            ceil = arr[mid];
            high = mid - 1;
        }
    }
    return ceil;
}
int main(){
    int arr[] = {1, 2, 4, 6, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int floor = findFloor(arr, n, key);
    int ceil = findCeil(arr, n, key);
    if (floor != -1){
        printf("Floor of %d is %d\n", key, floor);
    } else{
        printf("Floor of %d does not exist\n", key);
    }
    if (ceil != -1){
        printf("Ceil of %d is %d\n", key, ceil);
    } else{
        printf("Ceil of %d does not exist\n", key);
    }
    return 0;
}
