#include <stdio.h>
int main(){
    int i, j, k, n = 5;
    for(i = 1; i <= n; i++){
        for(k = 1; k <= i; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
