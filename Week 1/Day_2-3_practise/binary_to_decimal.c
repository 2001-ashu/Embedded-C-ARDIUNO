#include<stdio.h>
int main()
{
    int binary_num;
    scanf("%d",&binary_num);
    int a=1,ans=0;
    while(binary_num)
    {
        ans=ans+(binary_num%10)*a;
        binary_num=binary_num/10;
        a=a*2;
    }
    printf("%d",ans);
}