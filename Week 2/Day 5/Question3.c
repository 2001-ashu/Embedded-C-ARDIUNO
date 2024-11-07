#include <stdio.h>
#include <stdlib.h>
struct file
{
    int id;
    char *name;
    char *subject;
};
int main()
{
    int size;
    printf("Count of the student:");
    scanf("%d", &size);
    struct file f1[size];

    FILE *fp = fopen("content.txt", "a");

    printf("Enter Student Data:");
    fprintf(fp,"ID      Name            Subject\n");

    for (int i = 0; i < size; i++)
    {
       
        printf("\nEnter Student Id:");
        scanf("%d", &f1[i].id);
        f1[i].name = malloc(100 * sizeof(char));
        f1[i].subject = malloc(100 * sizeof(char));
        printf("Enter Name of the Student:");
        scanf("%s", f1[i].name);
        printf("Enter Subject of the student:");
        scanf("%s", f1[i].subject);

        fprintf(fp,"%d       %s            %s",f1[i].id,f1[i].name,f1[i].subject);
         fprintf(fp,"\n");
        free(f1[i].name);
        free(f1[i].subject);
    }
    fclose(fp);
}