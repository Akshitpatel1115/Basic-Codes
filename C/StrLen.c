#include <stdio.h>

int main(){
    char a[20];
    int len = 0;

    printf("Enter your string : ");
    gets(a);

    while(a[len] != '\0'){
        len++;
    }
    printf("Length of your string is : %d",len);
    return 0;
}