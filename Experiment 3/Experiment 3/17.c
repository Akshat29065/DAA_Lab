#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
void findKClosestElements(int arr[], int n, int target, int k){
    qsort(arr, n, sizeof(int), compare);
    int low = 0, high = n - 1;
    int mid = -1;
    while (low <= high){
        mid = low + (high - low) / 2;
        if (arr[mid] == target){
            break;
        } else if (arr[mid] < target){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    int left = mid - 1;
    int right = mid + 1;
    printf("The %d closest elements to %d are: ", k, target);
    printf("%d ", arr[mid]);    
    k--; 
    while (k > 0){
        if (left >= 0 && right < n){
            if (abs(arr[left] - target) <= abs(arr[right] - target)){
                printf("%d ", arr[left]);
                left--;
            } else{
                printf("%d ", arr[right]);
                right++;
            }
        } else if (left >= 0){
            printf("%d ", arr[left]);
            left--;
        } else if (right < n){
            printf("%d ", arr[right]);
            right++;
        }
        k--;
    }
    printf("\n");
}
int main(){
    int arr[] = {1, 5, 9, 8, 10, 3, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int k = 3;
    findKClosestElements(arr, n, target, k);
    return 0;
}
