#include<stdio.h>
int main(){
    int x, y,sum =0;
    printf("Enter the x and y values\n");
    scanf("%d%d", &x,&y);
    while (x >= 1){
        if (x % 2 !=0)
            sum += y;
        x /=2;
        y *=2;

    }
    printf("The sum is %d\n", sum);
    return 0;
}