#include<stdio.h>
void ref(int x, int y, int *p, int *q, int *r){
    *p = x + y;
    *q = x - y;
    *r = x * y;
}
int main(){
    int a = 5, b = 10, add,prod,sub;
    ref(a, b, &add, &sub, &prod);
    printf("The add = %d, sub = %d and prod = %d", add,sub, prod);
}