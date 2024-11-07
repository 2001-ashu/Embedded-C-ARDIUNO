#include<stdio.h>
int main()
{
    int iteration,max=0,num;
    printf("Enter How much numbers you want :");
    scanf("%d",&iteration);
    for(int i=0;i<iteration;i++)
    {
        scanf("%d",&num);
        if(num>max)
        max=num;
    }
    printf("Maximum Number is: %d",max);

}