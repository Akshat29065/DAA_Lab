#include <stdio.h>
#include <stdbool.h>
void printSubset(int subset[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", subset[i]);
    }
    printf("\n");
}
void findSubset(int set[], int n, int target, int subset[], int index, int subsetSize){
    if (target == 0){
        printSubset(subset, subsetSize);
        return;
    }
    if (n == 0 || target < 0){
        return;
    }
    subset[subsetSize] = set[index];
    findSubset(set, n - 1, target - set[index], subset, index + 1, subsetSize + 1);
    findSubset(set, n - 1, target, subset, index + 1, subsetSize);
}
int main(){
    int set[] = {3, 34, 4, 12, 5, 2};
    int target = 9;
    int n = sizeof(set) / sizeof(set[0]);
    int subset[n];
    printf("Subsets with sum %d are:\n", target);
    findSubset(set, n, target, subset, 0, 0);
    return 0;
}
    