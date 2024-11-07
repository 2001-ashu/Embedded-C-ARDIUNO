#include<stdio.h>
int main()
{
    int num,digit,sum=0,new_sum=0;
    scanf("%d",&num);
    while(num)
    {
        digit=num%10;
        if(digit==0)
        {
            digit=1;
        }
        sum=(sum*10)+digit;
        num=num/10;
    }
    while (sum)

    {
       digit=sum%10;
       new_sum=(new_sum*10)+digit;
       sum=sum/10;
    }
    
    printf("%d",new_sum);

}