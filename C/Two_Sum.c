// => sum two elements of array and it must be equal to target num and print it's index value.

#include <stdio.h>

int main()
{
    int nums[10], target;
    int i, j, n;

    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("nums[%d] = ", i);
        scanf("%d", &nums[i]);
    }

    printf("Enter your target : ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[j] == target - nums[i])
            {
                printf("[%d %d]", i, j);
            }
        }
    }

    return 0;
}