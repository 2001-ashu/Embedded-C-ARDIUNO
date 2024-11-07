#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col;
    printf("Enter row and col value:");
    scanf("%d%d",&row,&col);
    int **ptr=malloc(row*sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        ptr[i]=malloc(col*sizeof(int));
    }
    printf("Enter array of elements:");
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&ptr[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}