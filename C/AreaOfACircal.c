#include <stdio.h>
int main()
{
   //  float pi = 3.14;
   //  float r = 10;
   float pi=3.14, r,h;
   printf("Enter redius : ");
   scanf("%f",&r);
   printf("The area Of a circal with redius %f is %f\n",r, pi * r * r);
   printf("Enter height : ");
   scanf("%f",&h);
   printf("The volume of cylinder with redius %f and height %f is %f",r,h,pi*r*r*h);
   return 0;
}