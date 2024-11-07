#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
     int temp=num;
    while(num)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    printf("%d\n",sum);
    if(temp==sum)
    {
        printf("This number is palindrome %d",sum);
    }
    else
    {
        printf("This number is not palindrome %d",sum);
    }
}