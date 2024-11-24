#include<stdio.h>
int main(){
    int i, j, n, m;

    printf("Enter number of columns:");
    scanf("%d",&n);
    m=1;
    for(i=1;i<n*2;i++){
        for(j=1; j<=m; j++){
            printf("*");
        }
        if(i < n){
            m++;
        }
        else{
            m--;
        }
        printf("\n");
    }
    return 0;
}