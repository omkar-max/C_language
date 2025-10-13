#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40};
    int *ptr =  arr;

    // printf("%p\n", ptr);
    // printf("%p\n", ptr++);

    printf("%d\n", *ptr);
    printf("%d\n", *ptr++);

    printf("%d\n", *++ptr);
    
    return 0;
}