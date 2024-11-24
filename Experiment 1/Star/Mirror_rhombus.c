#include <stdio.h>

int main(){
    int i, j, k, n;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(k=0; k<i; k++){
            printf(" ");
        }
        for(j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
}