#include<stdio.h>
#include<stdlib.h>

int main(){
    int **a,i,j,rows,cols;
    printf("Enter the number of rows\n");
    scanf("%d %d", &rows, &cols);

    a = (int **)malloc(rows * sizeof(int));

    for(i = 0; i < rows; i++){
        a[i] = malloc(cols * sizeof(int));
    }

    for(i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
                }
    }

    for(i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            printf("%d\t", a[i][j]);
                }
        printf("\n");
    }

    for(i = 0; i < rows; i++){
        free(a[i]);
    }
    free(a);




    return  0;
}