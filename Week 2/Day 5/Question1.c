#include<stdio.h>
int main()
{
   FILE *fp=fopen("content.txt","r");
   char ch;
   while((ch=fgetc(fp))!=EOF)
   {
       printf("%c",ch);
   } 
   fclose(fp);
}