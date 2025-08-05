#include <stdio.h>

int main(){
    int a,b,c,sum;
    sum = ( a = 7,b = 8, c = 10, a+b+c);

    printf("The sum is %d", sum);

    return 0;
}

/*output: The sum is 25*/