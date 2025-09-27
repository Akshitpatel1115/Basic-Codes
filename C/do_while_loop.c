#include <stdio.h>

int main(){
    int i,n;
    i = 0;
    printf("Enter nutural number : ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    
    return 0;
}