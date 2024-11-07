#include<stdio.h>
union student 
{
    int id;
    char Div;
};
int main()
{
    union student st;
    printf("Enter Id of the student:");
    scanf("%d:",&st.id);
    printf("ID of the student:%d\n",st.id);
    printf("Div of the student:%c",st.Div);
}