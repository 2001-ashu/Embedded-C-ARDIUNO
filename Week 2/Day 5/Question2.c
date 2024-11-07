/* 
Difference Between fopen(),fclose(),fgets() and fputs

1]fopen()
-This function use for open the file.
-In this funtion their are two arguments one is file name /Filepath another one is mode of the file 
-Their are sevral modes:
r  :- open file in read mode.
w  :- open file in write mode.
a  :- open file in append mode. 
r+ :- open a file for both reading and writing purpose.
w+ :- open a file ,it first truncate the file to zero length if it exist otherwise it creates a file if it is not exist.
a+ :- open a file in reading and writing mode.It create a file if it is does not exist.The reading will start from the beginning but write can only be at last. 

2]fclose()
-It close an opend file
-This function is used for close the file after completing his operations.
-In this fuction ,only one argument is a file pointer.

3]fgets()
-It is used to read  a line of character from file.

4]fputs()
-It used to writes a line of charachter into file .
-In this function,their are two arguments,one is const string and second is file pointer.
*/

#include<stdio.h>
int main()
{
    FILE *fp=fopen("content.txt","r");
    FILE *fp1=fopen("copy_data.txt","w");
    char ch;
    while ((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,fp1);
    }
    
    
}