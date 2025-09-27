#include <stdio.h>
#include <string.h>
#define SIZE 2
struct vehicle
{
    int v_id;
    char v_number[10];
    char city[10];
};

int main()
{
    struct vehicle v_info[SIZE];
    int i;

    for(i = 0;i<SIZE;i++){
        printf("enter vehicle id : ");
        scanf("%d",&v_info[i].v_id);

        printf("enter vehicle number : ");
        scanf("%s",&v_info[i].v_number);

        printf("enter city of vehicle : ");
        scanf("%s",&v_info[i].city);
    }

    int found = 0;
     for(i = 0;i<SIZE;i++){
        if(strcasecmp(v_info[i].city,"vadodra") == 0){
            printf("%d %s %s",v_info[i].v_id,v_info[i].v_number,v_info[i].city);
            found = 1;
        }
     }
     if(found == 0){
        printf("there are no vehicle of vadodra city.");
     }

     return 0;
}