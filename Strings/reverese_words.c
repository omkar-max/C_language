#include<stdio.h>
#include<string.h>

void reverse(char str[], int start, int end){
    char temp;
    for(int i = start, j = end; i <= j; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void reverse_words(char str[], int end){
    for(int i = 0; i <= end; i++){
        if (str[i] == ' '){
            continue;
        }
        int start = i;
        while ((str[i] != ' ') && (i < end)){
            i++;
        }
        reverse(str,start,i-1);
        
    }
}

int main(){
    char str[] = "I have many books";

    reverse_words(str,strlen(str)-1);
    puts(str);

    return 0;
}