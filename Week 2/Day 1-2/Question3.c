#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter Size of the array:");
    scanf("%d",&size);
    int *ptr=malloc(size*sizeof(int));
    printf("Enter Elements of the array:");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Display the array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(ptr+i));
    }           
    
    
}