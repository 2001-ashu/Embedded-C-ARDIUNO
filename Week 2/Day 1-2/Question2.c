#include<stdio.h>
void print(int *ptr,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
}
int main()
{
    int size;
    printf("Enter Size of the array:");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    print(ptr,size);
    
}