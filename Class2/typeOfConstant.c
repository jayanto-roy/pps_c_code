#include <stdio.h>

int main() {

    // 1. Integer Constants
    int decimal = 100;      // Decimal
    int octal = 012;        // Octal (12 octal = 10 decimal)
    int hexa = 0x1A;        // Hexadecimal (1A hex = 26 decimal)

    // 2. Real / Floating Point Constant
    float pi = 3.14;

    // 3. Character Constant
    char grade = 'A';

    // 4. String Constant
    char name[] = "Jayanto";

    // 5. Backslash Character Constants (Escape Sequences)
    char newline = '\n';
    char tab = '\t';

    printf("Integer Constants:\n");
    printf("Decimal = %d\n", decimal);
    printf("Octal = %d\n", octal);
    printf("Hexadecimal = %d\n", hexa);

    printf("\nFloating Point Constant:\n");
    printf("PI = %.2f\n", pi);

    printf("\nCharacter Constant:\n");
    printf("Grade = %c\n", grade);

    printf("\nString Constant:\n");
    printf("Name = %s\n", name);

    printf("\nBackslash Character Constants:\n");
    printf("Hello%cWorld\n", newline);
    printf("Hello%cWorld\n", tab);

    return 0;
}