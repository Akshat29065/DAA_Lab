#include <stdio.h> 
int SumArray(int A[], int N){ 
	if (N <= 0) 
		return 0; 
	return (SumArray(A, N - 1) + A[N - 1]); 
} 
int main(){ 
	int A[] = { 1, 2, 3, 4, 5 }; 
	int N = sizeof(A) / sizeof(A[0]); 
	printf("%d", SumArray(A, N)); 
	return 0; 
} 
