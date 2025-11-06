#include<stdio.h>

#define FLAG

int main(){
    int a = 10, b = 20;
    #ifdef FLAG
        printf("Macro defined\n");
        a++;
        b++;
    #endif
    printf("%d %d", a,b);
    printf("PRogram completed\n");
        
}