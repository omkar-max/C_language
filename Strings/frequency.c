#include<stdio.h>
void frequency(char *str){
    char freq[256] = {0};
    int i = 0;
    while(str[i] !='\0'){
        
        freq[str[i]]+=1;
        i++;
    }
    for(int i = 0; i < 256; i++){
        if(freq[i] > 0 ){
            printf("%c-->%d\n", i,freq[i]);
        }
        
    } 
}
int main(){
    char str[] = "I have a programming";
    frequency(str);
    return 0;
}