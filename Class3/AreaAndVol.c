#include<stdio.h>
int main(){
    int a, area, vol;
    printf("enter value or a: ");
    scanf("%d", &a);
    area = a*a;
    printf("area : %d\n", area);
    vol = a*a*a;
    printf("vol : %d", vol);
    return 0;

}