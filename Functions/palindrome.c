#include <stdio.h>
int reverse (int);
int palindrome(int);


int main(){
    int num;
    printf("Enter the numnber");
    scanf("%d", &num);
    
    if(palindrome(num)){
        printf("It is palimdrome \n");

    }
    else{
        printf("It is not palindrome\n");
    }
    return 0;
}

int palindrome(int num){
    if (num == reverse(num))
        return 1;
    else    
        return 0;
}

int reverse(int num){
    int rem, reserved = 0;

    while (num > 0){
        rem = num % 10;
        reserved = reserved * 10 + rem;
        num /= 10;
    }
    return reserved;
    
}