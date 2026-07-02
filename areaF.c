#include<stdio.h>

void circleA(int r){//7

    double pi = 3.1416, res;
    res= pi * r * r;
    printf("Area of circle is : %f\n",res);
   
    }
void recA(int l, int w){
     int ress;
     ress= l*w;
     printf("Area of Rec is : %d",ress);
}
int main(){
    int r;
    int l, w;
    
    printf("Enter r value : ");
    scanf("%d",&r);
    printf("Enter l value : ");
    scanf("%d",&l);
    printf("Enter w value : ");
    scanf("%d",&w);
    circleA(r);
    recA(l,w);
    

    return 0;
}