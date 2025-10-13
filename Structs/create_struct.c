#include<stdio.h>
#include<string.h>
struct student{
char name[10];
int id;

};
int main(){
    struct student st1,st2,st3;
    strcpy(st1.name,"omkar");
    st1.id = 20;

    printf("Enter the structure details\n");

    scanf("%s %d",st2.name,&st2.id);
    puts(st2.name);
    printf("\t");
    printf("%d",st2.id);

    printf("\n");

    puts(st1.name);
    printf("\t");
    printf("%d",st1.id);


    
    return 0;
}