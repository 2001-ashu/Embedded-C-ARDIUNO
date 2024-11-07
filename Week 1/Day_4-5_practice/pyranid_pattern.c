#include <stdio.h>
void pattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
            printf(" ");

        for (int j = 1; j < 2 * i; j++)
            printf("*");
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d", &num);
    pattern(num);
}