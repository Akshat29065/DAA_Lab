#include <stdio.h>  
#include <conio.h>  
int main (){  
    char str[30];  
    int i;  
    printf ("Enter the string: ");  
    fgets(str, sizeof(str), stdin);
    for ( i = 0; i <= strlen(str); i++){  // The ASCII value of A is 65 and Z is 90  
        if (str[i] >= 65 && str[i] <= 90)  
        str[i] = str[i] + 32; /* add 32 to string character to convert into lower case. */  
    }  
    printf ("Upper Case to Lower case string is: %s", str);  
    return 0;  
}  