#include <stdio.h>

int main() {
    int password;

    printf("Enter Password: ");
    scanf("%d", &password);

    while(password != 1234) {
        printf("Wrong Password! \nTry Again: ");
        scanf("%d", &password);
    }

    printf("Login Successful!");

    return 0;
}