/*
Difference Betweeen Structure and Union

1] Structure:
1)It is declared using struct keyword.
2)Structure is user defined datatype in which we can create multiple data types variable in structure variable.
3)Each structure member variable store its own memory loaction.
4)Size of the structure is the addition of the all members of the stucture with the help of structure padding.
5)we can access all members at same time.

2] Union:
1)It is declared using union keyword.
2)union is user defined datatype in which we can create multiple datatype variable in union variable.
3)Every union member variable stores same memory location.
4)size of the union is the size of largest member.
5)we can access only one member at same time.
*/
// Structure Program

/*
#include<stdio.h>
#include<stdlib.h>
struct data{
    int items;
    char *item_name;
    char *add;
};
int main()
{
    struct data d1;
    d1.item_name=malloc(100*sizeof(char));
    d1.add=malloc(100*sizeof(char));
    printf("Enter Quantity of items:");
    scanf("%d",&d1.items);
    printf("Enter Items Names:");
    scanf("%s",d1.item_name);
    printf("Enter Address For that Parsal:");
    scanf("%s",d1.add);

    printf("Total Quantity of items : %d\n",d1.items);
    printf("Name of the Item : %s\n",d1.item_name);
    printf("Address of the parsal : %s\n",d1.add);

    free(d1.item_name);
    free(d1.add);

    
}

*/

/*
#include<stdio.h>
union student
{
    int id;
    char div;
};
int main()
{
    union student st;
    printf("Enter student ID:");
    scanf("%d",&st.id);
    printf("Enter the Division of the student:");
    scanf(" %c",&st.div);
    printf("ID of the student:%d\n",st.id);
    printf("Div of the student:%c",st.div);
}
*/