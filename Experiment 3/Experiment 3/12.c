#include <stdio.h>
void findFrequencies(int arr[], int n){
    int count = 1; 
    for (int i = 1; i < n; i++){
        if (arr[i] == arr[i - 1]){
            count++;
        } else{
            printf("Element %d appears %d times\n", arr[i - 1], count);
            count = 1;  
        }
    }
    printf("Element %d appears %d times\n", arr[n - 1], count);
}
int main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    findFrequencies(arr, n);
    return 0;
}
