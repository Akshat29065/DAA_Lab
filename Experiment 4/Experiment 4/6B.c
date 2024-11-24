#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int weight;
    int value;
} Item;
typedef struct{
    int level; 
    int profit; 
    int weight; 
    float bound;
} Node;
int compare(const void *a, const void *b){
    float r1 = ((Item*)a)->value / (float)((Item*)a)->weight;
    float r2 = ((Item*)b)->value / (float)((Item*)b)->weight;
    if (r1 > r2) return -1;
    if (r1 < r2) return 1;
    return 0;
}
float calculateBound(Node u, int n, int W, Item items[]){
    if (u.weight >= W) return 0;
    float bound = u.profit;
    int j = u.level + 1;
    int totalWeight = u.weight;
    while (j < n && totalWeight + items[j].weight <= W){
        totalWeight += items[j].weight;
        bound += items[j].value;
        j++;
    }
    if (j < n){
        bound += (W - totalWeight) * (items[j].value / (float)items[j].weight);
    }
    return bound;
}
int knapsack(int n, int W, Item items[]){
    qsort(items, n, sizeof(Item), compare);
    Node queue[100];
    int front = 0, rear = 0;
    Node u = { -1, 0, 0, 0.0 };
    queue[rear++] = u;
    int maxProfit = 0;
    while (front < rear){
        u = queue[front++];
        if (u.level == n - 1) continue;
        Node v = u;
        v.level = u.level + 1;
        v.weight = u.weight + items[v.level].weight;
        v.profit = u.profit + items[v.level].value;
        if (v.weight <= W && v.profit > maxProfit){
            maxProfit = v.profit;
        }
        v.bound = calculateBound(v, n, W, items);
        if (v.bound > maxProfit) {
            queue[rear++] = v;
        }
        v.weight = u.weight;
        v.profit = u.profit;
        v.bound = calculateBound(v, n, W, items);
        if (v.bound > maxProfit){
            queue[rear++] = v;
        }
    }
    return maxProfit;
}
int main() {
    int n = 4;  
    int W = 7;
    Item items[] = {
        {1, 1}, 
        {3, 4}, 
        {4, 5}, 
        {5, 7}  
    };
    int maxProfit = knapsack(n, W, items);
    printf("Maximum profit: %d\n", maxProfit);
    return 0;
}
