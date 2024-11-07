// Strcture 
/*
#include<stdio.h>
#include<stdlib.h>
struct car
{
    int model;
    char *name;
    char *color; 
};
void set_data(struct car *c1)
{
    printf("Enter car model:");
    scanf("%d",&c1->model);
    c1->name=malloc(100*sizeof(char));
    c1->color=malloc(100*sizeof(char));
    printf("Enter Car Name:");
    scanf("%s",c1->name);
    printf("Enter Car Color:");
    scanf("%s",c1->color);
  
}
void get_data(struct car c1)
{
    printf("Car model is: %d\n",c1.model);
    printf("Car name: %s\n",c1.name);
    printf("Car Color is: %s\n",c1.color);
}
int main()
{
    struct car c1;
    printf("The size of structure:%ld\n",sizeof(c1));
    set_data(&c1);
    get_data(c1);
}

*/

// Union
/*
#include<stdio.h>
#include<stdlib.h>
union car
{
    int model;
    char *name;
    char *color; 
};
int main()
{
    union car c1;
    printf("The size of union:%ld\n",sizeof(c1));
}
*/

/* Explanation:
1.sizeof the structure is the sum of all member also includes empty spaces.
2.sizeof the union is the largest member of the union.
*/
