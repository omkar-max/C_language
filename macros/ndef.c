#include<stdio.h>



int main(){
    int a = 10, b = 20;
    #ifndef FLAG // This is going to be executed either FLAG is not defined also.
        printf("Macro defined\n");
        a++;
        b++;
    #endif
    printf("%d %d", a,b);
    printf("PRogram completed\n");
        
}