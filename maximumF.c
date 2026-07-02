#include<stdio.h>

void maxnumber(int a, int b, int c){
    
    if (a <= b) {
        if (a <= c)
            printf("%d is the minimum number.", a);
        else
            printf("%d is the minimum number.", c);
    }
    else {
        if (b <= c)
            printf("%d is the minimum number.", b);
        else
            printf("%d is the minimum number.", c);
    }
    
    // if(a>b && a>c){
    //     printf("a is max.");
    // }else if(b>a && b<c){
    //     printf("b is max.");
        
    // }else if(c>a && c>b){
    //     printf("c is max.");
    // }else{
    //     printf("Invalid input");
    // }
    
    }
    
int main(){
    int a,b,c;
    printf("Enter a,b,c value : ");
    scanf("%d %d %d",&a,&b,&c);
    maxnumber(a,b,c);
    

    return 0;
}