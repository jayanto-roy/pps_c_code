#include<stdio.h>
int main(){
     int a = 19, b = 5, c;
     c = a+b;
     printf("result_add = %d \n", c );
     c = a - b;
     printf("result_sub = %d \n", c);
     c = a * b;
     printf("result_multi = %d \n", c);
     c = a%b;
     printf("result_mod = %d \n", c);

     int avg;
     c = 7;
     avg = (a+b+c)/3;
     printf("result_avg = %d \n" , avg);

    return 0;
}