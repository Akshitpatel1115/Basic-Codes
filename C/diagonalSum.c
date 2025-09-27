#include<stdio.h>

int main(){
    int i,j;
    int a[3][3],sum = 0;

    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            if(i == j){
                sum = sum + a[i][j];
            }
        }
    }

    printf("The sum of diagonal of matrix is %d.",sum);

    return 0;
}