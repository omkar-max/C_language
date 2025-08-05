#include <stdio.h>
int main(){
    int num, rem;
    for (num = 100; num <=999; num++){
        int temp = num, temp1 = num;
        int sum = 0;

        while (temp > 0)
        {
            /* code */
            rem = temp % 10;
            sum += (rem * rem * rem);
            temp /= 10;

        }
        if (sum == temp1){
            printf("%d\t",temp1);

        }

    }
    printf("\n");
    return 0;
}