#include <stdio.h>

// int factorial(int num){
//     if(num == 0){
//         return 1;
//     }
//     else if(num < 0){
//         printf("Please enter positive number.");
//     }
//     else{
//         return num * factorial(num-1);
//     }
// }
int main(){
    int num,i;
    unsigned long long int fac = 1;
    printf("Enter your number : ");
    scanf("%d",&num);

    for(i = 1; i <= num; i++){
        fac = fac * i;
    }

    printf("%llu",fac);
    return 0;
}