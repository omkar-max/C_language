#include<stdio.h>

int main(){
    int x, arr[8] = {10,20,30,40,50,60,70,80};
    // x = (arr + 2)[1];

    // printf("%d\n", x);

    // int *p, *q;
    // q = arr /2;
    // p = q *2;
    
    // printf("%d %d" ,*p, *q);
    int *p = arr;
    printf("Size of p=%u, size of arr = %u\n", sizeof(p), sizeof(arr));
    
    return 0;
}