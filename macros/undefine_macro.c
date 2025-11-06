#include<stdio.h>

#define FLAG

int main(){
    int a = 10, b = 20;
    #ifdef FLAG // This will be excuted because FLAG is defined
        printf("Macro defined\n"); 
        a++;
        b++;
    #endif
    #undef FLAG // FLAG terminated

    #ifdef FLAG // This is not going to be executed
        printf("Preproccess\n");
        a++;
        b++;
    #endif

    printf("%d %d", a,b);
    printf("PRogram completed\n");
        
}