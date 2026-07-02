#include<stdio.h>

void sum(int a){ //a=12345
    int c,d=0,e=a;
    while( a != 0){
        c=a%10;
        d = d*10 + c;
        a/=10;
    }
    //printf("res : %d\n",d);
    if(e == d){
        printf("It's Palindrom number.");
    }else{
         printf("It's not Palindrom number.");
        
    }
    
    
    }
    
int main(){
    int a;
    printf("Enter a value : ");
    scanf("%d",&a);
    sum(a);
    

    return 0;
}