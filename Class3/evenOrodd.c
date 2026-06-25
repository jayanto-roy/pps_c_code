#include<stdio.h>
int main(){
    int a,c=0;
    printf("Enter a value: ");
    scanf("%d", &a);

    // if(a%2 == 0){
    // printf("Even Number");
    // }else
    // printf("Odd Number");

    for(int i=1; i<=a; i++)
        {
            if(a%i==0){
                c++;
            
        }
    }
    if (c>2)
    printf("Its Not a Prime Number.");
    else
    printf("Its Prime NUmber");
       


    return 0;
}