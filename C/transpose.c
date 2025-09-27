#include<stdio.h>

int main(){
    int i,j;
    int a[3][3];

    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Transpose of a matrix\n");
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}