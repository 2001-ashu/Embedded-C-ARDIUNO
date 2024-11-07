#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter Number:");
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("It is Not prime Number\n");
    }
    else
    {
        printf("It is Prime Number\n");
    }
    

}