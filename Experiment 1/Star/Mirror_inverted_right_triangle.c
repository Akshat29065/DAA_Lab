#include <stdio.h>

int main(){
    int i, j, k, n;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);

    for(i=n; i>=0; i--){
        for(j=n; j>=i; j--){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
}