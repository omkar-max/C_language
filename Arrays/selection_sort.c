#include<stdio.h>
#define SIZE 10

void selection(int[]);
int main(){
    int arr[SIZE];
    printf("Enter the Elements\n");
    for(int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }

    selection(arr);
    // if (res == -1)
    //     printf("The element is not found in the array\n");
    // else
    //     printf("The element is found at %d", res);
    printf("The sorted array is:\n");

    for(int i = 0; i < SIZE; i++){

        printf("%d\t", arr[i]);
    }

    return 0;
}

void selection(int arr[]){
    int min;
    for(int i = 0; i < SIZE; i++){
        min = i;
        for(int j = i+1; j < SIZE; j++){
            
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if(i != min){
            int temp  = arr[i];
            arr[i] = arr[min];
            arr[min] = temp; 
        }
    }
    
}