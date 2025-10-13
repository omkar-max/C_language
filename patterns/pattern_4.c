#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ",n-j+1);

        }
        printf("\n");
    }
    return 0;

}
/*output: Enter the number of rows
5
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 */