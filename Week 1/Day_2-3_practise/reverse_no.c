#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int digit,sum=0;
    while(num)
    {
        digit=num%10;
        sum=(sum*10)+digit;
        num=num/10;
    }
    printf("Number after reverse:%d",sum);

}