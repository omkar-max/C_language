#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    printf("Enter the numbers");
    scanf("%d %*d %d",&num1,&num2,&num3);

    printf("%d %d %d",num1,num2,num3);

    return 0;
}


/*

How it Works:

    %d reads the first integer and stores it in num1.

    %*d reads the second integer but does not store it. It simply skips over it.

    %d reads the third integer and stores it in num3.
*/