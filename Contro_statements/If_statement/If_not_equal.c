// #include <stdio.h>

// int main(){
//     int x, y,que, rem;
//     printf("Enter the x and y values");
//     scanf("%d%d",&x,&y);

//     if (y){
//         que = x / y;
//         rem = x % y;
//         printf("The que = %d and rem = %d",que, rem);

    

//     }
//     else{
//         printf("Divide by zero error");
//     }
//     return 0;
// }
/*output: Enter the x and y values20
0
Divide by zero error*/

#include <stdio.h>

int main(){
    int x, y,que, rem;
    printf("Enter the x and y values");
    scanf("%d%d",&x,&y);

    // if (y){
    //     que = x / y;
    //     rem = x % y;
    //     printf("The que = %d and rem = %d",que, rem);

    

    // }
    // else{
    //     printf("Divide by zero error");
    // }
    if (!y){
        printf("Divide by zero error");
    }
    else{
        que = x / y;
        rem = x % y;
        printf("The que = %d and rem = %d",que, rem);

    }
    return 0;
}