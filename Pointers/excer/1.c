#include<stdio.h>

int main(){
    int arr[10] = {10,20,30,40,50,60,70,80,90,100}, *p;
    for(p = arr+2; p < arr +8; p=p+2){
        printf("%d\t", *p);
    }

    
    return 0;
}