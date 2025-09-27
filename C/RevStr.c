#include <stdio.h>

int main(){
    char a[20],len=0,i;

    printf("Enter your string : ");
    gets(a);

    while(a[len] != '\0'){
        len++;
    }

    for(i = len; i >= 0; i--){
        printf("%c",a[i]);
    }

    return 0;
}