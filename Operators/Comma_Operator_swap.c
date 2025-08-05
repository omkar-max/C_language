#include <stdio.h>

int main(){
    int a=7, b=8 ,temp;
    // printf("Enter the numbers");
    // scanf("%d%d",&a,&b);

    printf("The numbers before swapping %d,%d\n",a,b);

    temp = a, a = b, b = temp;

    printf("The numbers after swapping is %d, %d\n",a,b);

    return 0;
}