#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()

{
char str1[10],str2[20];
int index,l1,l2,flag=1;
printf("Enter first string:");
scanf("%s",str1);
printf("Entersecond string:");
scanf("%s",str2);
l1=strlen(str1);
l2=strlen(str2);
printf("Length of string1:%d\n",l1);
printf("Length of string2:%d\n",l2);
if(l1==l2)
{
for(index=0;str1[index]!='\0';index++)
{
if(str1[index]!=str2[index])
{
flag=0;
    break;
}
}
}
else
flag=0;
if(flag==1)
printf("Strings are equal");
else
printf("Strings are not equal");
}
