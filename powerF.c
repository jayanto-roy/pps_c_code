#include<stdio.h>

void value(int a, int b){//2 3
    
    int res=1;
    for(int i=1; i<=b; i++){
        res=a*res;
    }
    printf("result : %d",res);
    }
    
int main(){
    int a,b;
    printf("Enter a,b value : ");
    scanf("%d %d",&a,&b);
    value(a,b);
    

    return 0;
}