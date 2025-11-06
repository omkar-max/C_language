#include<stdio.h>
int add(int, int);

int main(){
    int (*func)(int, int);

    func =  add;
    int a = 10, b = 20;

    printf("The result is: %d", func(a,b));

    return 0;
}
int add(int a, int b){
    return a + b; 
}