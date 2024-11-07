#include<stdio.h>
int largest(int arr[],int size,int *max)
{
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>*max)
        {
            *max=arr[i];
        }
    }
    return *max;
    
}
int main()
{
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
            scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int ans=largest(arr,size,&max);
    printf("Largest Element in Array:%d",ans);


    

}