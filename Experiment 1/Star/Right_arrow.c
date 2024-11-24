#include <stdio.h>    
int main(){     
  int i, j, k, n;  
  printf("Enter the number of columns: ");  
  scanf("%d",&n);  
 for(i=0;i<n;i++){  
   for(j=0;j<i;j++){  
       printf(" ");  
   }  
   for(k=1;k<=n-i;k++){  
     printf("*");  
   }  
   printf("\n");  
 }  
for(i=1;i<n;i++){
  for(j=1;j<n-i;j++){  
    printf(" ");  
  }  
  for(k=1;k<=i+1;k++){  
    printf("*");  
  }  
  printf("\n");  
}  
  return 0;  
}  