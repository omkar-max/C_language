#include <stdio.h>
void display(int a, int b){
    printf("%d %d\n", a, b);
}

int main(){
    int a = 20;
    float b = 25.5;
    display(a, b);
    return 0;
}

/*output: 20 25
*/