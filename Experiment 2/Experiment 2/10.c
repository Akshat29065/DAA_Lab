#include <stdio.h>
int rearrange(int arr[], int n){
    int result[n];  
    int i = 0; 
    int j = n - 1; 
    int k = 0; 
    while (i <= j){
        if (k % 2 == 0) {
            result[k] = arr[j];
            j--;
        } else {
            result[k] = arr[i];
            i++;
        }
        k++;
    }
    for (i = 0; i < n; i++){
        arr[i] = result[i];
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printf("Rearranged array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
