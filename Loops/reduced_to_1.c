#include <stdio.h>
int main(){
    int num, rem;
    int sum;
    printf("enter the number");
    scanf("%d", &num);
    while (num / 10 != 0){
        int temp = num;
        sum = 0;
        
        while (temp > 0){
            rem = temp % 10;
            sum += rem;
            temp /= 10;

            
        }
        num = sum;

    }
    printf("%d",sum);
    
    return 0;
}