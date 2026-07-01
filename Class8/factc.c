#include<stdio.h>

void fact(n){
    
    int i,fac=1;
    for(i=1;i<=n; i++){
        fac = fac*i;   
    }
    printf("result : %d", fac);
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    fact(n);
    
    

    return 0;
}