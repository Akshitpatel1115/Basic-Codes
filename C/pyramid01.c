#include <stdio.h>

int main(){
    int i,j,n;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i = 1;i <= n;i++){  // for row
        for(j = n-i;j >= 1;j--){ // for spaces
            printf(" ");
        }
        for(j = 1;j <= i;j++){ // values print
            printf("*");
        }
        for(j = 1;j <= i-1;j++){ // values from back
            printf("*");
        }
        printf("\n");
    }
    return 0;
}