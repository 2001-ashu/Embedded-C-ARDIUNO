#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void add_days(int extra, struct Date *d1)
{
    int total = extra + d1->day;
    if (total > 31)
    {
        if (d1->month == 12)
        {
            d1->month = 1;
            d1->day = total - 31;
            d1->year=d1->year+1;
        }
        else
        {
            d1->month = d1->month + 1;
            d1->day = total - 31;
        }
    }
    else
    {
        d1->day = d1->day + extra;
    }
}
int main()
{
    int extra;
    struct Date d1;
    printf("Enter Day:");
    scanf("%d", &d1.day);
    printf("Enter month:");
    scanf("%d", &d1.month);
    printf("Enter Year:");
    scanf("%d", &d1.year);
    printf("Todays date Is %02d/%02d/%02d\n", d1.day, d1.month, d1.year);
    printf("Add Days into existing date:");
    scanf("%d", &extra);
    add_days(extra, &d1);
    printf("Updated date Is %02d/%02d/%02d\n", d1.day, d1.month, d1.year);
}