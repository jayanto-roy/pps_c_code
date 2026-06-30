#include<stdio.h>
#include<conio.h>

void sum(); // declaring a function
//clrsct();
int a=10,b=20, c;
void sum() // defining function
{
c=a+b;
printf("Sum: %d", c);
}
void main()
{
sum(); // calling function
}