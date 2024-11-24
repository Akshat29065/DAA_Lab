#include <stdio.h>  
int main() {  
    int n, search, i;  
    int found = 0;  
    printf("Enter number of elements: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter %d numbers:\n", n);  
    for(i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  
    printf("Enter number to search: ");  
    scanf("%d", &search);  
    for(i = 0; i < n; i++) {  
        if(arr[i] == search) {  
            printf("Number %d found at position %d.\n", search, i + 1);  
            found = 1;  
            break;
        }  
    }  
    if (!found) {  
        printf("Number %d not found in the array.\n", search);  
    }  
    return 0;  
}