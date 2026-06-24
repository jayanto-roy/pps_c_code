#include <stdio.h>

// User-defined data type (Structure)
struct Student {
    int id;
    char grade;
};

// User-defined data type (Union)
union Data {
    int i;
    float f;
};

// User-defined data type (Enum)
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main() {

    // Basic Data Types
    int age = 20;
    char ch = 'A';
    float marks = 85.5f;
    double salary = 50000.75;
    void *ptr = NULL;

    // Modified Data Types
    short int s = 10;
    long int l = 100000;
    long long int ll = 1000000000;
    unsigned int ui = 50;

    // Derived Data Types
    int arr[3] = {10, 20, 30};   // Array
    int *p = &age;               // Pointer

    // User-Defined Data Types
    struct Student st;
    st.id = 101;
    st.grade = 'A';

    union Data d;
    d.i = 100;

    enum Day today = MONDAY;

    // Output
    printf("Basic Data Types:\n");
    printf("int = %d\n", age);
    printf("char = %c\n", ch);
    printf("float = %.2f\n", marks);
    printf("double = %.2lf\n", salary);

    printf("\nModified Data Types:\n");
    printf("short int = %d\n", s);
    printf("long int = %ld\n", l);
    printf("long long int = %lld\n", ll);
    printf("unsigned int = %u\n", ui);

    printf("\nDerived Data Types:\n");
    printf("Array First Element = %d\n", arr[0]);
    printf("Pointer Value = %d\n", *p);

    printf("\nUser-Defined Data Types:\n");
    printf("Student ID = %d\n", st.id);
    printf("Student Grade = %c\n", st.grade);
    printf("Union Integer = %d\n", d.i);
    printf("Enum Day = %d\n", today);

    return 0;
}