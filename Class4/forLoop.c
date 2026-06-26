#include<stdio.h>
int main(){

    int n, i , fac = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
        {
            fac = fac*i;
            
        }
        printf("The Fac is : %d ", fac);


    return 0;

}