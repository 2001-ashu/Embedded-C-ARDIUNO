#include<stdio.h>
#include<stdbool.h>
bool isprime(int n)
{
    if(n==1  || n==0)
    return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int limit;
    scanf("%d",&limit);
    for (int i = 1; i <=limit; i++)
    {
       if(isprime(i))
       {
           printf("%d ",i);
       }
        
    }
    
}