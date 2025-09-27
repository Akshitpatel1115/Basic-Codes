#include <stdio.h>

int main()
{
    int a[3][2], b[3][2], sub[3][2], i, j;

    printf("Enter elements of first array.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second array.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n<== first array ==>\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    printf("\n<== second array ==>\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }

    printf("\n<== subtraction of two array ==>\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
            printf("%d\t", sub[i][j]);
        }
    }

    return 0;
}