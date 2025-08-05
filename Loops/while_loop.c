#include <stdio.h>

int main(void){
    int i = 10;
    while (i >= 2){
        printf("%d\t",i);
        i-=2;
    }
    printf("\n");
    return 0;
}