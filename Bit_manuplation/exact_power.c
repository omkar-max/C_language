#include<stdio.h>

int main(){
    int x;

    printf("Enter the number\n");
    scanf("%d", &x);

    if((x & x-1) == 0){
        printf("IT is exact power of 2\n");

    } 
    else{
        printf("It is not exact power of 2\n");
    }
    return 0;
}