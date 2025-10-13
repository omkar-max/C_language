#include<stdio.h>
struct student
{
    /* data */
    int id;
    char name[20];
};

int main(){
    struct student st[2];
    for(int i = 0; i < 2; i++){
        scanf("%d %s",&st[i].id,st[i].name);
    }

    for(int i = 0; i < 2; i++){
        printf("%d %s\n",st[i].id,st[i].name);
    }

    return 0;
}