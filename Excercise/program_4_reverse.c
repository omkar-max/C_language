#include<stdio.h>

int main(){
    int num, reversed = 0,rem;
    printf("Enter the number");
    scanf("%d", &num);

    while (num > 0){
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;


    }
    printf("%d \n",reversed);
    return 0;
}