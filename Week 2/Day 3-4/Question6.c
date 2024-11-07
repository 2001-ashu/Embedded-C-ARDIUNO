#include<stdio.h>
union mix
{
    int id;
    char div;
    float height;
    double salary;
};
void set_data(union mix *m1)
{
    printf("Enter Id:");
    scanf("%d",&m1->id);
    printf("Enter Division:");
    scanf(" %c",&m1->div);
    printf("Enter Height:");
    scanf("%f",&m1->height);
    printf("Enter Salary:");
    scanf("%lf",&m1->salary);
}
void get_data(union mix *m1)
{
    printf("Id Is:%d\n",m1->id);
    printf("Division Is:%c\n",m1->div);
    printf("Height Is :%f\n",m1->height);
    printf("Salary Is : %lf\n",m1->salary);
}
int main()
{
    union mix m1;
    set_data(&m1);
    get_data(&m1);
    
}

/*Explanation:
Overlapping Memory- Since all members of a union share the same memory, only the last assigned value will be valid
*/