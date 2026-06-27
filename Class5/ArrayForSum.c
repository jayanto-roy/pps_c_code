#include <stdio.h>

int main()
{
    int arr[5];
    int i, sum = 0;

    printf("\nEnter 5 elements: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum = %d\n\n", sum);

    return 0;
}