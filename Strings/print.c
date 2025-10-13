#include<stdio.h>

int main(){
     char str[] = "India";
    // for(int i = 0; str[i] !='\0'; i++){
    //     printf("%c", str[i]);
    // }
    char *p;
    p = str;
    while (*p != '\0') 
    {
        /* code */
        printf("%c", *p);
        p++;
    }
    
    return 0;
}