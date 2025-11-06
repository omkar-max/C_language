#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    int ch;
    if((fp = fopen("my_file.txt","r")) == NULL ){
        printf("No file existed\n");
        exit(1);
    }
    
    else{
        while ((ch = fgetc(fp)) != EOF){
            putchar(ch);
        }

    }
    fclose(fp);
    return 0;
}