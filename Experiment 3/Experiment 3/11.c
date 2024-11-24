#include <stdio.h>
int findFloor(int arr[], int low, int high, int x){
    if (high < low){
        return -1;  
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == x){
        return arr[mid];
    }
    if (arr[mid] < x){
        int floor = findFloor(arr, mid + 1, high, x);
        return (floor != -1) ? floor : arr[mid];
    }
    return findFloor(arr, low, mid - 1, x);
}
int findCeil(int arr[], int low, int high, int x){
    if (high < low){
        return -1;  
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == x){
        return arr[mid];
    }
    if (arr[mid] > x){
        int ceil = findCeil(arr, low, mid - 1, x);
        return (ceil != -1) ? ceil : arr[mid];
    }
    return findCeil(arr, mid + 1, high, x);
}
void findFloorAndCeil(int arr[], int n, int x){
    int floor = findFloor(arr, 0, n - 1, x);
    int ceil = findCeil(arr, 0, n - 1, x);
    if (floor != -1){
        printf("Floor of %d is %d\n", x, floor);
    } else{
        printf("No floor exists for %d\n", x);
    }
    if (ceil != -1){
        printf("Ceil of %d is %d\n", x, ceil);
    } else{
        printf("No ceil exists for %d\n", x);
    }
}
int main(){
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    findFloorAndCeil(arr, n, x);
    return 0;
}
