#include<stdio.h>
int main(){
    int row,col,i,j;

    printf("\nEnter the Row and Column : ");

    scanf("%d %d", &row, &col);
    
    printf("Now Matrix Size is : %dx%d\n", row,col);

    int arr[row][col]; //for int
    //char arr[row][col]; //for char
    //char arr[row][col][5]; //for String

   
    printf("Enter the %d elements: ", row*col);
    for(i=0; i<row; i++){
        for(j=0;j<col;j++){
            scanf("%d", &arr[i][j]);
            //scanf(" %c", &arr[i][j]);//space must
            //scanf("%4s", &arr[i][j]);
        }
    }
    printf("Matrix is : \n");
    
    for(i=0; i<row; i++){
        for(j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf(" \n");  
    }
  
    return 0;
}