#include <stdio.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
int knapsackDP(int values[], int weights[], int n, int capacity){
    int dp[n+1][capacity+1];
    for (int i = 0; i <= n; i++){
        for (int w = 0; w <= capacity; w++){
            if (i == 0 || w == 0){
                dp[i][w] = 0;
            } else if (weights[i-1] <= w){
                dp[i][w] = max(dp[i-1][w], dp[i-1][w - weights[i-1]] + values[i-1]);
            } else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    return dp[n][capacity];
}
int main(){
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int n = sizeof(values) / sizeof(values[0]);
    int capacity = 50;
    int result = knapsackDP(values, weights, n, capacity);
    printf("Dynamic Programming approach: Maximum value = %d\n", result);
    return 0;
}
