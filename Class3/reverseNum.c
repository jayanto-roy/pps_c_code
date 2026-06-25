#include <stdio.h>

int main() {
    int num = 123;

    int a = num / 100;        // 1
    int b = (num / 10) % 10; // 2
    int c = num % 10;        // 3

    int reverse = c * 100 + b * 10 + a;

    printf("Reversed Number = %d", reverse);

    return 0;
}