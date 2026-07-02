#include<stdio.h>

void prime(int n){
    int a=0;
    for(int i=2; i<n; i++){
        if(n%i == 0){
        a++;
        }
       }
       
       if(a==0){
           printf("this is a prime number.");
       }else{
            printf("this is not a prime number.");
       }
    }
    
int main(){
    int n;
    printf("Enter n value : ");
    scanf("%d",&n);
    prime(n);
    

    return 0;
}