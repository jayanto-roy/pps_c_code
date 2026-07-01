#include<stdio.h>
int main(){
    int i, t1, t2, n;

    printf("Enter n : ");
    scanf("%d",&n);

    t1 = 0; t2 = 1;
    int term = t1 + t2;
    printf("Term : %d", term);
    
    for(i=3; i<=n; i++){
        printf("%d",term);
        t1 = t2;
        t2 = term;
        term = t1 + t2;
    }

    return 0;



}