#include <stdio.h>

int main(){
    int x = 8;
    printf("x=%d\t",x);
    printf("x=%d\t",x++);
    printf("x=%d\t",x);
    printf("x=%d\t",x--);
    printf("x=%d\t",x);
    return 0;
}
/*output: x=8	x=8	x=9	x=9	x=8*/