#include<stdio.h>
int main()
{
    int num;
    printf("Enter no:");
    scanf("%d",&num);
    int temp=num;
    int digit,sum=0;
    while(num)
    {
        digit=num%10;
        sum=sum+(digit*digit*digit);
        num=num/10;

    }
    if(temp==sum)
    printf("%d This is Armstrong Number\n",temp);
    else
    {
        printf("%d This is not armstrong number\n",temp);
    }
    
}