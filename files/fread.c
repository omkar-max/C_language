#include<stdio.h>
#include<stdlib.h>
struct record{
    int id;
    char gender;
}student;
int main(){
    FILE *fp;

    if ((fp = fopen("stu", "rb")) == NULL){
        printf("File is not available\n");
        exit(1);


    }
    while(fread(&student,sizeof(student),1,fp)){
        printf("%d %c\n",student.id,student.gender);
    }
    fclose(fp);
    return 0;
}