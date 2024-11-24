#include<stdio.h>  
int main(){  
    int i, n, temp;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++){  
        scanf("%d", &arr[i]);  
    }  
    int end = n - 1;  
    for(i = 0; i < n/2; i++){  
        temp = arr[i];  
        arr[i] = arr[end];  
        arr[end] = temp;  
        end--;  
    }  
    printf("The reversed array: ");  
    for(i = 0; i < n; i++){  
        printf("%d ", arr[i]);  
    }  
}  