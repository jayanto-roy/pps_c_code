#include <stdio.h>

int main() {
    int a = 5;

    printf("Initial = %d\n", a);

    ++a;
    printf("After Increment = %d\n", a);

    --a;
    printf("After Decrement = %d\n", a);

    return 0;
}