#include <stdio.h>

int main()
{
    int n, tem, rem, arm = 0;

    printf("Enter your number : ");
    scanf("%d", &n);
    if(n <=0){
        printf("ERROR: Please enter valid integer number.");
        return 0;
    }

    tem = n;
    while (n != 0)
    {
        rem = n % 10;
        arm = arm + (rem * rem * rem);
        n /= 10;
    }

    if(tem == arm)
    {
        printf("%d is an Armstrong number.", tem);
    }
    else
    {
        printf("%d isn't an Armstrong number.", tem);
    }
    return 0;
}