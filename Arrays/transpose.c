#include<stdio.h>
#define Row 3
#define Col 3
int main(){

    int arr1[Row][Col], arr2[Row][Col],i,j;
    printf("Enter the matrix values\n");
    for(i = 0; i < Row; i++){
        for(j = 0; j < Col; j++){
            scanf("%d", &arr1[i][j]);

        }
    }

    printf("The transpose matrix values are\n");

    for(i = 0; i < Row; i++){
        for (j = 0; j < Col; j++){
            printf("%5d", arr1[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}