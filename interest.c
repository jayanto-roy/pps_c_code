#include<stdio.h>
int inters(int p,int r, int n){
    float res;
    res=(p*r*n)/100;
    printf("result : %f",res);
}
int main(){
    int p,r,n;
    printf("Enter the Numbers : ");
    scanf("%d %d %d",&p,&r, &n);
    inters(p,r,n);
    
    return 0;
}