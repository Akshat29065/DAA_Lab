#include <stdio.h>
int main(){
    int i, j, k, n = 5;
    for(i = n; i >= 1; i--){
        for(j = n; j > i; j--){
            printf(" ");
        }
        for(k = 1; k <= (2*i - 1); k++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
