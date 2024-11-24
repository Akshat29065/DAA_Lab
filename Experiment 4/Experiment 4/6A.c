#include <stdio.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
int knapsackBacktracking(int values[], int weights[], int n, int capacity, int currentValue, int currentWeight, int index){
    if (currentWeight > capacity){
        return 0;
    }
    if (index == n){
        return currentValue;
    }
    int includeItem = knapsackBacktracking(values, weights, n, capacity, currentValue + values[index], currentWeight + weights[index], index + 1);
    int excludeItem = knapsackBacktracking(values, weights, n, capacity, currentValue, currentWeight, index + 1);
    return max(includeItem, excludeItem);
}
int main(){
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int n = sizeof(values) / sizeof(values[0]);
    int capacity = 50;
    int result = knapsackBacktracking(values, weights, n, capacity, 0, 0, 0);
    printf("Backtracking approach: Maximum value = %d\n", result);
    return 0;
}
