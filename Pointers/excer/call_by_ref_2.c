#include<stdio.h>

void fun(int x,int *p){
    int temp;
    temp = x;
    x = *p;
    *p = temp;
}

int main(){
    int a = 2, b = 6;
    fun(a, &b);
    printf("%d %d ", a, b);
    
    return 0;
}