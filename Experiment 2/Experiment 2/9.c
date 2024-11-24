#include <stdio.h>
int move_zeros(int A[], int n){
    int B[n];
    int j = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (A[i] != 0){
            B[j] = A[i];
            j++;
        }
        else {
            count++;
        }
    }
    while (count > 0){
        B[j] = 0;
        count--;
        j++;
    }
    for (int i = 0; i < n; i++){
        A[i] = B[i];
    }
    printf("array after shifting zeros to right side:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}
int main(){
    int A[] = {4,0,9,0,0,5,6,2,0};
    int n = sizeof(A) / sizeof(A[0]);
    move_zeros(A, n);
    return 0;
}