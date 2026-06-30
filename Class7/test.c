#include<stdio.h>
#include<conio.h> 
#include<string.h>
void main(){

char str1[10],str2[10];
int i,j; 

printf("Enter 1st str : ");
scanf("%s", &str1);
printf("Enter 2nd str : ");
scanf("%s", &str2);

// printf("str1 = %d\n", strlen(str1));
// printf("str2 = %d\n", strlen(str2));
//printf("str1 and str2 = %s\n", strcpy(str1,str2) );
//printf("str1 and str2 = %s \n", strcat(str1, str2) );
// printf("str1 = %s\n", strlwr(str1) );
// printf("str2 = %s\n", strlwr(str2) );
// printf("str1 = %s\n", strupr(str1) );
// printf("str2 = %s\n", strupr(str2) );
// printf("str1 = %s\n", strrev(str1) );
// printf("str2 = %s\n", strrev(str2) );
i=strcmp(str1,str2);
printf("cmp : %5d",i);






}