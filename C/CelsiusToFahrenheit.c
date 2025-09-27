#include <stdio.h>

int main(){
    float c;
    printf("Enter Celsius : ");
    scanf("%f",&c);
    float f = (9.0/5.0)*c+32;
    printf("The Value in fahrenheit is %f",f);
    return 0;
}