#include<stdio.h>
int main(){

    int marks,a;
    printf("Enter a(0 to 60): ");
    scanf("%d", &a);
    // if(marks>=50)
    // {
    //     printf(0);
    // }
    // else
    
    switch (a)
    {
    case 0:
        printf("Fail");
        break;
    case 1:
        printf("Greade B");
        break;
    case 2:
        printf("Greade A");
        break;
    // case 3:
    //     printf("WednesDay");
    //     break;
    default:
        break;
    }





    return 0;
}