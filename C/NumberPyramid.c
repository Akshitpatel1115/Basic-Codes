#include <stdio.h>

int main(){
    int i,j,n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(i = n;i >= 1;i--){
        for(j = n;j >= i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}