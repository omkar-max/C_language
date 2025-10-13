#include <stdio.h>

int main(){
    int num, sum = 0;
    for (int i = 0; i< 10; i++){
        printf("Enter the number\n");
        scanf("%d", &num);

        if (num < 0){
            printf("Please enter the positive numbers");
            continue;
        }
        sum+=num;
    }
    printf("The average is %d\n",sum/10);
    return 0;
}