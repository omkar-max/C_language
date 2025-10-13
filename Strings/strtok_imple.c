#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *my_strtok(char *str, char *del){
    static char *next;

    if (str){
        next = str;
    }

    if (next == NULL){
        return NULL;
    }
    // It computes the length of the initial segment of a
    //string that consists entirely of characters found within a specified set of characters.
    /*
    // C program to illustrate strspn() function
#include <stdio.h>
#include <string.h>

int main () {
   int len = strspn("geeks for geeks","geek");
   printf("Length of initial segment matching : %d\n", len );    
   return(0);
}output:4*/
    next+= strspn(next,del);
    
     if (*next == '\0') {
        next = NULL;
        return NULL;
    }

    //  if(next != NULL){
    //     *next ='\0';
    //     next++;
        
    // }

    char *start = next;

    next+=strcspn(next,del);

    if(*next != '\0'){
        *next ='\0';
        next++;
        
    }
    else{
        next = NULL;
        
    }
    return start;
}

int main(){
    char str[] =" apple,,banana;grape  ";
    char *del = " ,;:";

    char *token = my_strtok(str,del);

    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL,del);
    }
    
    return 0;
}