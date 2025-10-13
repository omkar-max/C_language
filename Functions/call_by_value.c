#include<stdio.h>
int func(int, int);
int main(){
    int x = 10, y = 20;
    // printf("Enter the values\n");
    // scanf("%d%d", &x,&y);

    func(x, y);
    printf("%d %d\n", x,y);
    return 0;
}

void func(int a, int b){
    a++;
    b--;
    printf("a = %d and b = %d\n", a, b);
}