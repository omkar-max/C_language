#include<stdio.h>
long int binary(int);
int main(){
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    printf("The binary number %ld\n", binary(num));
    return 0;

}

long int binary(int num){
    long a = 1, bin = 0,rem;

    while (num > 0){
        rem  = num % 2;
        bin = bin + rem * a;
        num /= 2;
        a *= 10;
    }
    return bin;

}