#include <stdio.h>
int main(){
    int n;
    unsigned long long int fact = 1;
    printf("Enter the number");
    scanf("%d",&n);
    if (n < 0){
        printf("No factorial for negative numbers");

    }
    else{
        while (n > 0){
            fact *= n;
            n-=1;
        }
        printf("The factorial of the number is %llu\n",fact);
    }
    return 0;
}