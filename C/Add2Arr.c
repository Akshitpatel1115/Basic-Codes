#include <stdio.h>

int main()
{
    int a[2][3], b[2][3], sum[2][3], i, j;

    // first array input by user
    printf("Enter element of first matrix.\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // second array input by user
    printf("\nEnter elements of second matrix.\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n<== First array ==>\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    printf("\n<== Second array ==>\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }

    printf("\n<== Addition of two matrix ==>\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
    }

    return 0;
}