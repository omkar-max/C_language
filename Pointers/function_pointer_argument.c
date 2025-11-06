#include<stdio.h>
int add(int, int, void (*func)(int));
void ding(int);
int main(){
    int (*func)(int, int);

    
    int a = 10, b = 20, c = 30;

    printf("The result is: %d", add(a,b,ding));

    return 0;
}
int add(int a, int b, void (*fun)(int)){
    
    (   *fun)(10);
    return a + b;
}

void ding(int a){
    printf("Function get called\n");
}
