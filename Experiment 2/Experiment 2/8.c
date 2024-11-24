#include <stdio.h>
int print3largest(int arr[], int arr_size){
    int i, first, second, third;
    first = second = third = arr[0];
    for (i = 1; i < arr_size; i++){
        if (arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first){
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first){
            third = arr[i];
        }
    }
    printf("Three largest elements are %d, %d, %d\n", first, second, third);
}
int main(){
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    print3largest(arr, n);
    return 0;
}
