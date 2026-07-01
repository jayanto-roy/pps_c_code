#include<stdio.h>
    int c, a, b;

    
void sum(a,b){
    
    
                c=a+b;
        printf("result: %d", c);

}

int main(){
    printf("Enter a and b : ");
    scanf("%d%d", &a,&b);
    sum(a,b);

    return 0;
}