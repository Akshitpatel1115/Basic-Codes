#include<stdio.h>

int main(){
    int n,tem,rem,rev = 0;

    printf("Enter your number : ");
    scanf("%d",&n);
    if(n == 0 || n < 0){
        printf("ERROR: Please enter valid integer number.");
        return 0;
    }

    tem = n;
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n/=10;
    }

    if(tem == rev){
        printf("%d is an polindromic number.",tem);
    }
    else{
        printf("%d isn't an polindromic number.",tem);
    }
    return 0;
}