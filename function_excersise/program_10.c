#include<stdio.h>
int fact_sum(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if (num % i == 0){
            sum +=i;
        }
    }
    return sum;
}
int main(){
    int start, end;
    printf("Enetr the start and end numbers\n");
    scanf("%d %d", &start,&end);
    for(int i = start; i <= end; i++){
        int first_sum = fact_sum(i);
        int second_sum = fact_sum(first_sum);
        if (i == second_sum){
            printf("The amipair are %d and %d\n", first_sum,second_sum);
        }
    }

    return 0;
}