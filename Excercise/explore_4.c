#include <stdio.h>

int main(){
    int i,j;
    for (j = i+1, i =1; i<=5;i++,j++){
        printf("%d %d",i,j);
    }
    return 0;
}