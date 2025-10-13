#include<stdio.h>
#include<string.h>
union example
{   
    int id;
    char gender;
    /* data */
};


int main(){
    union example ex;
    printf("%p  %p \n",&ex.id,&ex.gender);
    ex.id  = 12;
    printf("%d\n", ex.id);

    ex.gender = 'A';
    printf("%c\n", ex.gender); 
    
    printf("%d\n", ex.id);
    // This we will get garbage value because in unions we can use only one value at time
    // we used id initilly after that, that memory override by gender
    // So when we try to access the id, no longer accessed because it alread accessed by gender element.
    


    return 0;
}