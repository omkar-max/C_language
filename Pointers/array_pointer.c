#include<stdio.h>
int main(){
    int *p, arr[] = {10,20,30,40};
    p = arr;
    // for(int i = 0; i < 4; i++){
    //     printf("%d   %p  %p  %p\n", p[i], &p[i],&arr[i], &p[i]);
    // }
    printf("%d\n", *(p+1));
    return 0;
}