#include<stdio.h>
void ref(int *p, int *q);
int main(){
    int a = 5, b = 10;
    printf("The values before incremented a = %d and b = %d\n", a,b);
    ref(&a,&b);
    printf("The values after incremented a = %d and b = %d\n", a,b);

    return 0;
}

void ref(int *p, int *q){
    (*p)++;
    (*q)++;
}