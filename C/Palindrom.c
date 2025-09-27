#include <stdio.h>

int main(){
    int rem,rev = 0,tem,n;

    printf("Enter your number : ");
    scanf("%d",&n);

    // store number in tem variable bcz we change n value
    tem = n;

    while(n != 0){
        rem = n % 10;
        rev = (rev * 10) + rem;
        n/=10;
    }

    if(tem == rev){
        printf("%d is palindrom number.!!",rev);
    }
    else{
        printf("%d isn't palindrom number.!!",rev);
    }
    return 0;
}