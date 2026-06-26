#include <stdio.h>

int main() {
    int password;

start:
    printf("Enter Password: ");
    scanf("%d", &password);

    if (password != 1234) {
        printf("Wrong Password! Try Again.\n");
        goto start;
    }

    printf("Login Successful!\n");

    return 0;
}