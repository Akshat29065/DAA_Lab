#include <stdio.h>

int main(){
    int i, j, k, n, m;
    printf("Enter the Number of rows: ");
    scanf("%d", &n);
    m = n;

    for(i=1; i<=n; i++){
        for(j=1; j<= m-1; j++){
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++){
            printf("*");
        }
        m--;
        printf("\n");
    }

    for(i=n; i>=1; i--){
        for(j=1; j<m; j++){
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++){
            printf("*");
        }
        m++;
        printf("\n");
    }

}