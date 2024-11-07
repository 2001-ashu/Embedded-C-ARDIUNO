#include<stdio.h>
int main()
{
    int var1,var2;
    printf("Enter Var1 and Var2:");
    scanf("%d%d",&var1,&var2);
    printf("Before Swapping:Var1:%d AND Var2:%d\n",var1,var2);
    var1=var1^var2;
    var2=var1^var2;
    var1=var1^var2;
    printf("After Swapping:Var1:%d AND Var2:%d\n",var1,var2);
}