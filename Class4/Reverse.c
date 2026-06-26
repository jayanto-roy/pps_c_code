#include<stdio.h>
int main(){

    int num, rem,rev = 0;
    printf("Enter the Num : ");
    scanf("%d", &num);

    while(num != 0){
        rem = num%10;
        rev = rev*10+rem;
        num /= 10;
    }
    printf("result : %d", rev);



    return 0;
}