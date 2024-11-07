#include <stdio.h>
#include <stdlib.h>
struct File
{
    int roll_number;
    char *name;
    int marks;
};
FILE *fp;

void Add(struct File *f1)
{

    printf("Enter Student Roll_number:");
    scanf("%d", &f1->roll_number);
    printf("Enter Student Name:");
    f1->name = malloc(100 * sizeof(char));
    scanf("%s", f1->name);
    printf("Enter Student Marks:");
    scanf("%d", &f1->marks);
    fprintf(fp, "%d\t\t\t\t%s\t\t\t%d\n", f1->roll_number, f1->name, f1->marks);
}
void display()
{
    FILE *p = fopen("student.txt", "r");
    char ch;
    while ((ch = fgetc(p)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(p);
}
void delete ()
{
    FILE *f = fopen("student.txt", "w+");
    fclose(f);
}
int main()
{
    struct File f1;
    int ch;
    int k = 1;
    fp = fopen("student.txt", "a+");

   // fprintf(fp, "Roll_Number\t\tName\t\t\tMarks\n");

    while (k == 1)
    {
        printf("Enter student details:\n");

        printf("1.Add Student\n2.Display Table\n3.Delete Database\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Add(&f1);
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        case 4:
            k = 0;
        }
    }
    fclose(fp);
}
