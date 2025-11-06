#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    if((fp = fopen("my_file.txt","w")) == NULL){
        printf("The file is empty\n");
        exit(1);
    }
    int ch;
    printf("Enter the chars\n");
    while((ch = getchar()) != EOF){
        fputc(ch,fp);
        fflush(fp);
    }
    fclose(fp);
    printf("success\n");
    return 0;
}