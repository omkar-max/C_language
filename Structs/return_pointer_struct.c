#include<stdio.h>
struct student{
    char name[10];
    int marks;
};
struct student *func(struct student *p1,struct student *p2){
    if(p1->marks > p2->marks){
        return p1;
    }
    else{
        return p2;
    }
}
void display(struct student *stdptr){
    printf("%s %d\n", stdptr->name,stdptr->marks);
}
int main(){
    struct student st1 = {"omkar",45},st2 ={"ding",44};
    struct student *stdptr;
    stdptr = func(&st1,&st2);
    display(stdptr);
    return 0;
}