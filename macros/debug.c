#include<stdio.h>
#define DEBUG

#ifdef DEBUG
    #define SHOW(message) printf message
#else 
    #define SHOW(message) 
#endif

void func(){
    SHOW(("Inside function\n");)
}
int main(){
    int x,y;
    
        SHOW(("Main started\n");)
    func();
    SHOW(("The value of x and y\n");)

    return 0;
}