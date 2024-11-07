#include<stdio.h>
void largest_smallest(int arr[],int size,int *max,int *min)
{
    for(int i=0;i<size;i++)
    {
        if(*max<arr[i])
        {
            *max=arr[i];
        }
        if(*min>arr[i])
        {
            *min=arr[i];
        }
    }
} 
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    int largest=arr[0];
    int smallest=arr[0];
    largest_smallest(arr,size,&largest,&smallest);
    printf("Largest Element in array:%d\nSmallest element in array:%d\n",largest,smallest);
}