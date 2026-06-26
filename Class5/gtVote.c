// #include<stdio.h>
// int main()
// {
// int age;
// printf("Enter you age: ");
// scanf("%d", &age);
// if(age>=18)
// goto Vote;
// else
// goto NoVote;
// Vote:
// printf("you are eligible for voting\n");
// return 0;
// NoVote:
// printf("you are not eligible to vote\n");
// return 0;
//}
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        goto Vote;
    else
        goto NoVote;

Vote:
    printf("You are eligible for voting.\n");
    return 0;

NoVote:
    printf("You are not eligible to vote.\n");
    return 0;
}
