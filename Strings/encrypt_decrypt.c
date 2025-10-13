#include<stdio.h>
void encrypt(char *str){
    while(*str++ != '\0'){
        if(*str < 97 || *str > 122){
            continue;
        }
        if(*str == 'z'){
            *str = 'a';
        }
        else{
            *str = *str + 1;
        }
        // str++;

    }
}

void decrypt(char *str){
    while(*str++ != '\0'){
        if(*str < 97 || *str > 122){
            continue;
        }
        if(*str == 'a'){
            *str = 'z';
        }
        else{
            *str = *str - 1;
        }
        // str++;

    }
}
int main(){
    char str[] = "program";
    encrypt(str);
    printf("%s\n", str);
    decrypt(str);
    printf("%s\n", str);
    return 0;
}