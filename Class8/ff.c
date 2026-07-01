#include<stdio.h>

int fibo(int n){
    int  i, t1, t2;
    t1 = 0; t2 = 1;
    int term = t1 + t2;
    printf("T1 and T2 : %d%d", t1,t2);
    
    for(i=3; i<=n; i++){
        printf("%d",term);
        t1 = t2;
        t2 = term;
        term = t1 + t2;
    }
    return 0;
}

int main(){
    int n;

    printf("Enter n : ");
    scanf("%d",&n);
    fibo(n);

    return 0;
    }