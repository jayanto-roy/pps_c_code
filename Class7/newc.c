#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
//clrscr();
printf("Enter any character/digit:");
ch=getchar();
if(isalpha(ch)>0)
 printf("it is a alphabet:%c\n",ch);
else if(isdigit(ch)>0)
 printf("it is a digit:%c\n",ch);
else
 printf("it is a alphanumeric:%c\n",ch);
getch();
}