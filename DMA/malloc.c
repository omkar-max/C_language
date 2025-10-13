#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, n;
    printf("Enter the number of integers to be entered");
    scanf("%d", &n);


    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL){
        printf("Insufficient memory in the heap\n");
    }

    for(int i = 0; i < n; i++){
        scanf("%d", (ptr+i));
    }

    for(int i = 0; i < n; i++){
        printf("%d\t", *(ptr+i));
    }

    return 0;
}