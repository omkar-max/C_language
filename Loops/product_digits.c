#include <stdio.h>
int main(){
    int num = 0, rem, prod = 1;
    if (!num){
        printf("%d\n",num);
    }
    else{

        while (num > 0){
            rem = num % 10;
            prod *= rem;
            num /= 10;
        }
        printf("%d\n",prod);
    }
    
    return 0;
}