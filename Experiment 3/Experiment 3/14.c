#include <stdio.h>
#include <math.h>
int divide(int A, int B) {
    if (B == 0){
        printf("Division by zero is not allowed.\n");
        return -1;
    }
    int negativeResult = 0;
    if ((A < 0 && B > 0) || (A > 0 && B < 0)){
        negativeResult = 1;
    }
    A = abs(A);
    B = abs(B);
    int low = 0, high = A;
    int result = 0;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (B * mid == A){
            result = mid;
            break;
        }
        else if (B * mid < A){
            result = mid; 
            low = mid + 1; 
        }
        else{
            high = mid - 1;  
        }
    }
    return (negativeResult) ? -result : result;
}
int main(){
    int A = 10, B = 3;
    int quotient = divide(A, B);
    if (quotient != -1){
        printf("The quotient of %d / %d is: %d\n", A, B, quotient);
    }
    return 0;
}
