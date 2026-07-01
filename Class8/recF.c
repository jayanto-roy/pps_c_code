#include<stdio.h>
int fibo(n){
    if(n <= 1)
    return n;// fibo(n-1,n-2);
    else
    return fibo(n-1)+ fibo(n-2);   
}
int main(){
 int n,res;
 printf("Enter n : ");
 scanf("%d",&n);

 for(int i = 0; i<n; i++){
 res= fibo(i);
 printf("%d\n", res);
}

    return 0;
}