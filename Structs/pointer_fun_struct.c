#include<stdio.h>
struct student{
    char name[10];
    int marks;
};
void increment(struct student  *ptr)
{
    (ptr->marks)++;
}
void display(struct student *ptr){
    printf("%s %d\n",ptr->name,ptr->marks);
}
int main(){
    
    struct student st = {"omkar", 20};
    printf("%s %d\n",st.name,st.marks);
    increment(&st);
    display(&st);
    
    return 0;
}