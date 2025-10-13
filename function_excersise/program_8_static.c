#include<stdio.h>
void func(int a, static int b){
    a++;
    b++;
    printf("%d %d", a,b);
}
int main(){
    func(1,2);
    func(3,4);
    return 0;
}
/*Error*/