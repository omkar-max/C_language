#include<stdio.h>
#define SIZE 10

int binary_search(int[],int);

int main(){
    int arr[SIZE],item = 10;
    printf("Enter the Elements\n");
    for(int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    int res = binary_search(arr,item);
    if (res == -1)
        printf("The element is not found in the array\n");
    else
        printf("The element is found at %d", res);
    return 0;
}

int binary_search(int arr[], int item){

    int low = arr[0], high = arr[SIZE - 1];

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == item){
            return mid;
        }
        else if (arr[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;

    }
    return -1;
    
}