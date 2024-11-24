#include <stdio.h>
#include <math.h>
double squareRoot(double N){
    if (N == 0) return 0;
    double low = 0, high = N;
    double mid;
    double precision = 1e-6;  
    while ((high - low) > precision){
        mid = low + (high - low) / 2;
        if (mid * mid == N){
            return mid;
        }
        if (mid * mid < N){
            low = mid; 
        } else{
            high = mid;
        }
    }
    return mid;
}
int main(){
    double N = 16.0;
    double result = squareRoot(N);
    printf("Square root of %.6f is approximately %.6f\n", N, result);
    return 0;
}
