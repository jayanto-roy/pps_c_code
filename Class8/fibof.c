#include<stdio.h>
int fact(n){
    if(n != 0)
    return n * fact(n-1);
    else
     return 1;//sum n
     
    
}
int main(){
 int n,res;
 printf("Enter n : ");
 scanf("%d",&n);

 res= fact(n);
 printf("Result : %d", res);

    return 0;
}