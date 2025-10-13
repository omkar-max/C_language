#include<stdio.h>
struct student {
    int id;
    char name[10];
};

int main(){
    struct student st = {20,"omkar"},*ptr;
    ptr = &st;
    printf("%d %s", ptr->id,ptr->name);
    // printf("%d %s",*(ptr).id,*(ptr).name);
    return 0;
}