#include<stdio.h>

void sum(int a){ //a=12345
    int c,d=0;
    while( a != 0){
        c=a%10;
        d = d + c;
        a/=10;
    }
    printf("res : %d",d);
    
    
    }
    
int main(){
    int a;
    printf("Enter a value : ");
    scanf("%d",&a);
    sum(a);
    

    return 0;
}