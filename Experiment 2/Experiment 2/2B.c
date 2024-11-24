#include <stdio.h>
int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int position;
    printf("Enter the position you want to delete: ");
    scanf("%d", &position);
    for (int i = position -1; i < n -1; i++){
        a[i] = a[i+1];
    }
    printf("Array after deletion: ");
    for(int i = 0; i < n-1; i++){
        printf("%d ", a[i]);
    }
}