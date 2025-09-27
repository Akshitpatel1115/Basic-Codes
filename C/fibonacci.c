// with Recurtion function
// #include<stdio.h>

// int fab(int n){
//     if(n == 0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     else{
//         return fab(n - 1) + fab(n - 2);
//     }
// }

// int main(){
//     int n,i;
//     printf("Enter the number of term : ");
//     scanf("%d",&n);

//     printf("Fibonacci Sequence : ");
//     for(i = 0;i < n;i++){
//         printf("%d ",fab(i));
//     }

//     return 0;
// }

// without recurtion function
#include<stdio.h>

int main(){
    int n,i,first = 0,second = 1,next;
    printf("Enter the number of term : ");
    scanf("%d",&n);

    printf("Fibonacci Sequence : ");
    for(i = 0;i < n;i++){
        if(i <= 1){
            next = i;
        }
        else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ",next);
    }

    return 0;
}