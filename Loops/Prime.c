#include <stdio.h>
#include <math.h>
int main(){
    int num, i;
    printf("Enter the number");
    scanf("%d", &num);
    for (i = 2; i <= sqrt(num); i++ ){
        if (num % 2 == 0)
            break;
    }
    if (i > sqrt(num))
    {
        printf("The number is prime number");
        /* code */
    }
    else{
        printf("It is not a prime number");

    }
    

    
    return 0;
}