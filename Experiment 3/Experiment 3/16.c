#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
void findPairsWithDifferenceK(int arr[], int n, int k){
    qsort(arr, n, sizeof(int), compare);
    int i = 0, j = 1;
    while (j < n){
        if (arr[j] - arr[i] == k){
            printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            i++;
            j++;
        }
        else if (arr[j] - arr[i] < k){
            j++;
        }
        else{
            i++;
        }
        if (i == j){
            j++;
        }
    }
}
int main(){
    int arr[] = {5, 20, 3, 2, 50, 80, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 20;
    findPairsWithDifferenceK(arr, n, k);
    return 0;
}
