#include<stdio.h>
#include<string.h>
int count_words(char *str){
    int count = 0;
    while (*str != '\0'){
        
        while ((*str ==' ') && (*str != '\0')){
            
            str++;
        }
        
        
        if (*str == '\0'){
            break;
        }
        
        while ((*str != ' ') && (*str != '\0')){
            
            putchar(*str);
            str++;
        }
        printf("\n");
        count++;
       
        
    }
    return count;
}
int main(){
    char str[] = " blue  green   red";
    printf("%d\n", count_words(str));
    return 0;
}