#include<stdio.h>

int main(){
    int arr[50], n, k,temp;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the nth element to find reverse\n");
    scanf("%d", &k);

    for(int i = 0, j = k -1; i < j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("The reverse elements are \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}