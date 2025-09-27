#include<stdio.h>

int main(){
    int i,j,n;
    n = 5;

    printf("\nRight upper :- \n");
    for(i = 1;i <= n;i++){
        for(j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\nRight lower :- \n");
    for(i = 1;i <= n;i++){
        for(j = i;j <= n;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\nLeft upper\n");
    for(i = 1;i <= n;i++){
        for(j = 1;j <= n-i;j++){
            printf(" ");
        }
        for(j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nLeft lower\n");
    for(i = n;i >= 1;i--){
        for(j = n-i;j >= 1;j--){
            printf(" ");
        }
        for(j = i;j >= 1;j--){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}