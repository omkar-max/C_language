#include<stdio.h>

int main(){
    int a = 10, *ptr = &a;
    void *fp;
    fp = ptr;
    printf("The pointer value is %d", *(int*)fp);
    
    return 0;
}