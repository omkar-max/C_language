#include <stdio.h>

int main(){
    int a;
    printf("Enter the case \n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        /* code */
        printf("First\n");
        break;
    case 2:
        printf("Second\n");
        break;
    
    default:
        // break;
        printf("Default case\n");
        break;
    }
    return 0;
}