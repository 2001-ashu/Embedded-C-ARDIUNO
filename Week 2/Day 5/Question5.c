#include <stdio.h>
#include <stdlib.h>
int size;
struct inventory
{
    char *name;
    int id;
    int price;
    int qty;
};
FILE *ptr;
void Add_items(struct inventory *items)
{

    for (int i = 0; i < size; i++)
    {
        items[i].name = malloc(100 * sizeof(char));
        printf("Enter Items name:");
        scanf("%s", items[i].name);
        printf("Enter Id of the Item:");
        scanf("%d", &items[i].id);
        printf("Enter price of the Item:");
        scanf("%d", &items[i].price);
        printf("Enter Quntity of the Item:");
        scanf("%d", &items[i].qty);

        fprintf(ptr, "%s\t\t%d\t\t%d\t\t\t%d\n", items[i].name, items[i].id, items[i].price, items[i].qty);
    }
    fclose(ptr);
}
void delete_item(struct inventory *items)
{
    FILE *r = fopen("inventory.txt", "r");
    FILE *w = fopen("tmp.txt", "w");
    int no;
    char ch;
    printf("Enter Id of the item which you want to delete:");
    scanf("%d", &no);

    // while (fscanf(r, "%99s%d%d%d", items->name, &items->id, &items->price, &items->qty) != EOF)
    // {
    //     if (items->id != no)
    //     {
    //         fprintf(w, "%s\t\t%d\t\t%d\t\t%d\n", items->name, items->id, items->price, items->qty);
    //     }
    // }
      char name[100];
    int id, price, qty;

    while (fscanf(r, "%99s%d%d%d", name, &id, &price, &qty) != EOF) {
        if (id != no) {
            fprintf(w, "%s\t\t%d\t\t%d\t\t%d\n", items->name, items->id, items->price, items->qty);
        }
    }
    fclose(r);
    fclose(w);
    remove("inventory.txt");
    rename("tmp.txt", "inventory.txt");
}

void delete_db()
{
    FILE *fp = fopen("inventory.txt", "w+");
    fclose(fp);
}
void show()
{
    FILE *p = fopen("inventory.txt", "r");
    char ch;
    while ((ch = fgetc(p)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(p);
}
int main()
{

    printf("Enter count of items:");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Give Valid count...\n");
        main();
    }
    struct inventory *items = malloc(size * sizeof(struct inventory));

    int ch;
    int k = 1;
    ptr = fopen("inventory.txt", "a+");
    //fprintf(ptr, "Item\t\tID\t\tPrice\t\tQuantity\n");

    while (k)
    {
        printf("1.Add Items\n2.Delete Items\n3.Delete Database\n4.Show DataBase\n5.Save Database\n6.Exit\nEnter your Choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:

            Add_items(items);
            printf("Item Added Successfully\n");
            break;
        case 2:
            delete_item(items);
            break;
        case 3:
            printf("Delete Database Successfully\n");
            delete_db();
            break;
        case 4:
            show();
            break;
        case 5:
            printf("Saved Data Successfully\n");
            break;
        default:
            k = 0;
            break;
        }
    }
}

