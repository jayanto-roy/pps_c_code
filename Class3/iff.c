#include<stdio.h>
int main(){
    int marks;
    printf("enter marks value:");
    scanf("%d", &marks);
    if(marks >= 70){
        printf("Great A");}
        else if( marks<70 && marks>50 )
            printf("Great B");
            else if(marks<=50 && marks>30)
            printf("Great C");
            else
            printf("Fail");
            
     //return 0;   
    // int a, b , c;
    // printf("Enter a, b, c values\n");
    // scanf("%d %d %d", &a, &b, &c );
    // if(a>b && a>c ){
    //     printf("a is greater than b and c.");
    // }
    //     else if(b>a && b>c ){
    //         printf("b is greater than a and c.");
    //     }
    //     else{
    //         printf("c is greater than b and c.");
    //     }
    
return 0;
    }
    

   