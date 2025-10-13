#include <stdio.h>

int main(){
    int n,p,d;
    printf("Enter the number of rows\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            printf(" ");

        }
        p = i;
        for (int k = 1; k <= i; k++){
            printf("%d", p++);
        }
        d = (i * 2) - 2;
        for(int k =  1; k <= i-1; k++){
            printf("%d",d--);

        }
        printf("\n");
    }
    return 0;

}
/*output:Enter the number of rows
5
    1
   232
  34543
 4567654
567898765
*/