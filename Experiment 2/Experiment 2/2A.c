#include <stdio.h>
int main(){
    int a[] = {1,2,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int position;
    int element;
    printf("Enter the position of the element you want to Insert: ");
    scanf("%d",&position);
    printf("Enter the element: ");
    scanf("%d", &element);

    for(int i = n-1; i >= position - 1; i--){
        a[i+1] = a[i];
    }
    a[position - 1] = element;
    printf("Array after insertion: \n");
    for(int j = 0; j<n ; j++)
        printf("%d\n", a[j]);
}
