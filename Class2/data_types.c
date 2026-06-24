#include <stdio.h>

int main() {
    // Integer types
    int a = 10;
    short int b = 20;
    long int c = 30000;
    long long int d = 4000000;

    // Character type
    char ch = 'A';

    // Floating-point types
    float f = 12.34f;
    double g = 123.456;
    long double h = 1234.56789L;

    // Unsigned type
    unsigned int ui = 100;

    // Boolean type (C99)
    _Bool flag = 1;

    printf("int = %d\n", a);
    printf("short int = %d\n", b);
    printf("long int = %ld\n", c);
    printf("long long int = %lld\n", d);

    printf("char = %c\n", ch);

    printf("float = %.2f\n", f);
    printf("double = %.3lf\n", g);
    printf("long double = %.5Lf\n", h);

    printf("unsigned int = %u\n", ui);

    printf("bool = %d\n", flag);

    return 0;
}