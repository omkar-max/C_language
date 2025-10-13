#include<stdio.h>
#define MAX 10
int main(){
    int arr[MAX], i = 1;
    for(int i = 0; i < MAX; i++){
        scanf("%d", &arr[i]);
    }
    while (i < MAX)
    {
        /* code */
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;

        i += 2;

    }
    for(int i = 0; i < MAX; i++){
        printf("%d\t", arr[i]);
    }
    


    return 0;
}