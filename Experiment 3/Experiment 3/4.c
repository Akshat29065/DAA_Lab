#include <stdio.h>
int findFirstOccurrence(int arr[], int n, int key){
    int low = 0, high = n - 1, result = -1;
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
int findLastOccurrence(int arr[], int n, int key){
    int low = 0, high = n - 1, result = -1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == key){
            result = mid;  
            low = mid + 1;
        } else if (arr[mid] < key){
            low = mid + 1;  
        } else{
            high = mid - 1; 
        }
    }
    return result;
}
int countOccurrences(int arr[], int n, int key){
    int first = findFirstOccurrence(arr, n, key);
    int last = findLastOccurrence(arr, n, key);
    if (first == -1 || last == -1){
        return 0; 
    }
    return last - first + 1;
}
int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int count = countOccurrences(arr, n, key);
    if (count > 0){
        printf("Element %d occurs %d times in the array\n", key, count);
    } else{
        printf("Element %d is not present in the array\n", key);
    }
    return 0;
}
