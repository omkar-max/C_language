#include<stdio.h>

#define IS_UPPER(ch) ((ch >= 'a')  && (ch <= 'z'))
#define IS_LOWER(ch)  ((ch >= 'A')  && (ch <= 'Z'))
#define IS_AL(ch) (IS_UPPER(ch) || IS_LOWER(ch))

#define IS_NUM (ch >= 0 && ch <= 9)
#define IS_ALPHA_NUM(ch) (IS_AL(ch) || IS_AL(ch))

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(IS_ALPHA_NUM(ch)){
        printf("It is alphanum\n");

    }
    else{
        printf("It is not\n");
    }
    return 0;
}