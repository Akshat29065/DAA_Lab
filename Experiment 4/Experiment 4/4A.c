#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int value;
    int weight;
    float ratio; 
} Item;
int compare(const void* a, const void* b) {
    Item* item1 = (Item*)a;
    Item* item2 = (Item*)b;
    if (item1->ratio < item2->ratio) return 1;
    if (item1->ratio > item2->ratio) return -1;
    return 0;
}
float knapsackGreedy(Item items[], int n, int capacity) {
    qsort(items, n, sizeof(Item), compare);    
    int totalWeight = 0;
    float totalValue = 0.0;  
    for (int i = 0; i < n; i++) {
        if (totalWeight + items[i].weight <= capacity) {
            totalWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            int remainingWeight = capacity - totalWeight;
            totalValue += items[i].value * ((float)remainingWeight / items[i].weight);
            break;
        }
    }
    return totalValue;
}
int main() {
    Item items[] = {
        {60, 10, 0}, {100, 20, 0}, {120, 30, 0}
    };
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 50;  
    for (int i = 0; i < n; i++) {
        items[i].ratio = (float)items[i].value / items[i].weight;
    }
    float result = knapsackGreedy(items, n, capacity);
    printf("Greedy approach: Maximum value = %.2f\n", result);
    return 0;
}
