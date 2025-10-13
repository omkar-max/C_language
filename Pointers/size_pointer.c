#include <stdio.h>

int main(){
    char x = 'a', *p1= &x;
    int a = 10, *p2 = &a;
    float b = 23.5, *p3 = &b;
    double c = 456.89, *p4 = &c;
    printf("The size of p1 = %p, The size of *p1 = %p\n", sizeof(p1),sizeof(*p1));
    return 0;
}