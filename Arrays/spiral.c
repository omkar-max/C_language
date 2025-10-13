#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the row and col size\n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i =0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int top = 0, bottom = row-1;
    int left = 0, right = col - 1;

    while ((top <= bottom) && (left <= right)){
        for (int i = left; i <=right; i++)
        {
            /* code */
            printf("%d\t", arr[top][i]);
        }
        top += 1;
        for(int i = top; i <= bottom; i++){
            printf("%d\t", arr[i][right]);

        }
        right -= 1;
        if (!(left < right && top < bottom)){
            break;
        }

        for(int i = right; i >=left; i-- ){
            printf("%d\t", arr[bottom][i]);
        }
        bottom -= 1;

        for (int i = bottom; i >= top; i--){
            printf("%d\t", arr[i][left]);

        }
        left += 1;
        
    }
    return 0;
}