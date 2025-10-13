#include<stdio.h>

int main(){
    int *p, **q;
    int x = 10;
    p = &x;
    q = &x;
    printf("%d", **q);
    
    return 0;
}