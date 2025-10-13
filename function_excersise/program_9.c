#include<stdio.h>
int fun(int m, int n){
    return (m > n)? m :
    m < n?  n:
    0;
}

int main(){
    int m = 10, n = 5;
    printf("%d",fun(m,n));
    return 0;
}