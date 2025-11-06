#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char str[80];

    if((fp = fopen("test","w")) == NULL){
        printf("File is not existed\n");
        exit(1);
    }
    else{
        printf("Enter the data\n");
        while(fgets(str,sizeof(str),stdin) != NULL){
            fputs(str,fp);
        }
    }
    fclose(fp);
    return 0;
}