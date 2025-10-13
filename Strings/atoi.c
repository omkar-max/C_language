#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int my_atoi(char *str){
    int result = 0;
    int sign  = 1;

    while(*str != '\0' && *str == ' '){
        str++;
    }

    if(*str != '\0' && *str == '-'){
        
            sign  = -1;
            str++;
        
    }

    while(*str != '\0' && isdigit((unsigned char)*str)){
        result =  result *10 + (*str - '0');
        str++;
    }

    return sign * result;
}

int main(){
    char *arr;
    arr = (char *)malloc(100);
    if (arr == NULL){
        return 0;
    }
    printf("Enter the string\n");
    gets(arr);

    printf("%d\n", my_atoi(arr));
return 0;
}