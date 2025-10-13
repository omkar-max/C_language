#include<stdio.h>
struct student{
    int id;
    char name[10];
}; 
struct person{
    int p;
    struct student t; 
}p;
int main(){
    p.t.id =10;
    printf("%d", p.t.id);
    return 0;
}