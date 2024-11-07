#include<stdio.h>
void swap(int *x,int *y)
{
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}
int main()
{
    int val1,val2;
    printf("Enter Two value:");
    scanf("%d%d",&val1,&val2);
    printf("Before Swapping Val1=%d & Val2=%d\n",val1,val2);
    swap(&val1,&val2);
    printf("After Swapping Val1=%d & Val2=%d",val1,val2);
}