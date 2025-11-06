#include<stdio.h>
#include<stdlib.h>
struct record{
    int id;
    char gender;
}student;

int main(){
    FILE *fp;
    if((fp = fopen("stu","wb")) == NULL){
        printf("There is problem opening the file\n");
        exit(1);
    }

    for(int i = 0; i < 2; i++){
        printf("Enter the record details %d\n", i);
        scanf("%d %c", &student.id,&student.gender);
        fwrite(&student,sizeof(student),1,fp);
    }
    fclose(fp);
    return 0;
}