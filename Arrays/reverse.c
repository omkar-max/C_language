#include<stdio.h>

int main(){
    int temp,arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0, j = 9; i < j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}