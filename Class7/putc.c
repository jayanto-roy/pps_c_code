#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
printf("Enter any alphabet either in lower or uppercase:");
ch=getchar();
if(islower(ch))
putchar(toupper(ch));
else
putchar(tolower(ch));
getch();
}