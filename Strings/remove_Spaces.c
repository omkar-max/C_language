#include<stdio.h>
void remove_space(char *str){
    
    while (*str++ != '\0')
    {
        /* code */
        if(*str != ' '){
            putchar(*str);
        }

    }
    
}

int main(){
    char str[] = "  omkar  ";
    remove_space(str);
    // printf("%s",str);
    return 0;
}