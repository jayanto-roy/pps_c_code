#include<stdio.h>
int main(){
    int i, j, k, test[2][3][4];

    for(i=0;i<2; i++){
        for(j=0;j<3; j++){
            for(k=0;k<4; k++){
                scanf("%d", &test[i][j][k]);
            }
        }
    }
    
    
    printf("Output: \n");
    for(i=0;i<2; i++){
        for(j=0;j<3; j++){
            for(k=0;k<4; k++){
                printf("%d ", test[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }





    return 0;
}