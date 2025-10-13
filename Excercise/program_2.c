#include<stdio.h>

int main(){
    int max, num;
    printf("Enter the number");
    scanf("%d", &num);
    max = num;

    for(int i = 2; i <= 10; i++){
        printf("Enter the number %d: ", i);
        scanf("%d", &num);
        
        if (num > max){
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}