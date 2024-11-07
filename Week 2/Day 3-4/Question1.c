#include <stdio.h>
#include <stdlib.h>
struct Employee
{
    char *name;
    int id;
    float salary;
};

void put_data(struct Employee emp[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        emp[i].name = malloc(100 * sizeof(char));
        printf("Enter %d Employee name:", i);
        scanf("%s", emp[i].name);
        printf("Enter %d Employee ID:", i);
        scanf("%d", &emp[i].id);
        printf("Enter %d Employee salary:", i);
        scanf("%f", &emp[i].salary);
        printf("============================================\n");
    }
    
}
void get_data(struct Employee emp[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        printf("%d Employee name:%s\n", i, emp[i].name);

        printf("%d Employee ID:%d\n", i, emp[i].id);

        printf("%d Employee Salary:%f\n", i, emp[i].salary);
        printf("============================================\n");
    }
}
int main()
{
    int size;
    printf("Enter the count of Employee:");
    scanf("%d", &size);
    struct Employee emp[size];
    put_data(emp, size);
    get_data(emp, size);
}