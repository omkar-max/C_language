#include<stdio.h>
#include<string.h>
int count(char *str,char ch){
    int cnt = 0;
    while (*str++ != '\0')
    {
        /* code */
        if(*str == ch){
            cnt++;
        }
        
    }
    return cnt;
    
}
void replace(char *str,char char1, char char2){
    while (*str++ != '\0')
    {
        if(*str == char1){
            *str =char2;
        }
    }
    
}
void delete(char *str,char char1){
 int i, j;
 for(i = 0, j = 0; i <= strlen(str)-1; i++){
    if(str[i] != char1){
        str[j++] = str[i];
    }
 }
  str[j] = '\0';
}
int main(){
    char str[30];
    strcpy(str,"Programming in C language");
    printf("%d\n",count(str,'a'));\

    // replace(str, 'a','z');
    delete(str,'P');
    puts(str);
    return 0;
}