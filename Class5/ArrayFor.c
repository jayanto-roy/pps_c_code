#include <stdio.h>

int main()
{
    int arr[10], fre[10]={0,0,0,0,0,0,0,0,0,0};
    int i,n,count;

    printf("\nEnter 10 elements: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are: ");
    //scanf("%d", &n);
    for(i = 0; i < 10; i++)
    {
        // fre[arr[i]]++;
        if(arr[i]==n){
            fre[n]++;
        }
   
    }
    for(i = 0; i < 10; i++)
    {
        
        printf("Count : %d\n", fre[i]);
    }


    printf("\n\n");

    return 0;
}