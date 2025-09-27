#include <stdio.h>
#include <conio.h>

void main ()
{
    int a;
    clrscr();
    printf("Enter a : ");
    scanf("%d",&a);
    switch(a){
	case 1:
	    printf("sunday\n");
	    break;
	case 2:
	    printf("monday\n");
	    break;
	case 3:
	    printf("tuseday\n");
	    break;
	case 4:
	    printf("wednesday\n");
	    break;
	case 5:
	    printf("thurseday\n");
	    break;
	case 6:
	    printf("friday\n");
	    break;
	case 7:
	    printf("saturday\n");
	    break;
	default:
	    printf("Invalide");
    }
    getch();
}