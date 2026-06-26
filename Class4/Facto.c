#include<stdio.h>
int main(){

    int fac = 1, a;
    printf("Enter the Num : ");
    scanf("%d", &a);

    while(a>=1){
        fac = fac*a;
        a--;
    }
     printf("%d", fac);



    return 0;
}