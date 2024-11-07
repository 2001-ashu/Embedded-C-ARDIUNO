#include<stdio.h>
int main()
{
    int num;
    printf("Enter A Number:");
    scanf("%d",&num);
    int fact=1;
    for(int  i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of a given number: %d",fact);
}