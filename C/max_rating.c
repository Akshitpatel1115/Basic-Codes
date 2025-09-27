#include <stdio.h>
#define max 5

struct AppData
{
    char app_name[10];
    int download_count;
    float rating;
    char devloper[10];
};
int main()
{
    struct AppData apps[max];
    int i, max_rating = 0;

    for (i = 0; i < max; i++)
    {
        printf("Enter details of %d app :- \n",i+1);
        printf("Enter app name : ");
        scanf("%s", &apps[i].app_name);

        printf("Enter app download count : ");
        scanf("%d", &apps[i].download_count);

        printf("Enter app rating(out of 5) : ");
        scanf("%f", &apps[i].rating);

        printf("Enter app devloper name : ");
        scanf("%s", &apps[i].devloper);

        printf("\n");
    }

    for (i = 0; i < max; i++)
    {
        if (apps[i].rating > apps[max_rating].rating)
        {
            max_rating = i;
        }
    }

    printf("The details of highest rating app :- \n");
    printf("App Name : %s\n", apps[max_rating].app_name);
    printf("Download Count : %d\n", apps[max_rating].download_count);
    printf("Rating : %f\n", apps[max_rating].rating);
    printf("Devloper : %s\n", apps[max_rating].devloper);

    return 0;
}