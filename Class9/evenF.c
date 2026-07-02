#include<stdio.h>

int even(int n){
    
    if(n%2 == 0){
        return 1;
    }else{
        return 0;
    }
    
}
int main(){
    int n,a;
    printf("Enter n value : ");
    scanf("%d",&n);
    a=even(n);
    printf("%d",a);

    return 0;
}