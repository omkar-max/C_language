#include<stdio.h>
void func(int arr[]);
int main(){
    int arr[] = {1,2,3,4,5};
    func(arr);
    return 0;
}

void func(int arr[]){
    for(int i = 0; i < 5; i++){
        printf("%d\t", arr[i]);
    }
}