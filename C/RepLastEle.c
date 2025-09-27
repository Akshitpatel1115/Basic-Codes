#include <stdio.h>

int main()
{
    int a[3][3], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        int sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
        a[i][2] = sum;
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    return 0;
}