#include <stdio.h>
int main(){
    int bin = 1010,decimal = 0,j = 1,rem;
    while (bin > 0){
        rem = bin % 10;
        decimal = decimal +(j * rem);
        j *= 2;
        bin /= 10;

    }
    printf("%d\n", decimal);
    return 0;
}