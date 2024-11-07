#include<stdio.h>
int GCD(int a,int b)
{
    while (a>0 && b>0)
    {
        if(a>b)
        a=a%b;
        else
        {
            b=b%a;
        }
        
    }
    if(a==0)
    return b;

    return a;
    
}
int main()
{
    int a1,b1;
    printf("Enter num1 and num2:");
    scanf("%d%d",&a1,&b1);
    int num=GCD(a1,b1);
    printf("Answer is:%d",num);
}
