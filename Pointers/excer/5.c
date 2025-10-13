#include<stdio.h>
int b = 20;
void fun(int *p){
    (*p)++;
}

int main(){
    int a = 10, *ptr;
    ptr = &a;
    printf("%d", *ptr);
    fun(&a);
    printf("%d", *ptr);
    return 0;
}