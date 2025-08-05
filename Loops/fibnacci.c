#include <stdio.h>

int main(){
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms");
    scanf("%d", &n);
    printf("%d\t", b);
    for(int i = 1; i < n; i++){
        c = a + b;
        printf("%d\t", c);
         a = b;
         b = c;

    }
    printf("\n");
    return 0;
}