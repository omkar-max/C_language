#include<stdio.h>
#include<stdlib.h>
#include <dlfcn.h>


int main(){
    void (*fptr)(void);
    void *header;

    printf("%s The main started",__FILE__);
    getchar();

    header = dlopen("./libtest.so",RTLD_NOW);
    if(header == NULL){
        printf("Error at opening the file\n");
        exit(1);

    }
    printf("file opened at %p\n", header);
    getchar();
    fptr = dlsym(header,"lib1_func1");
    if(!fptr){
        printf("Error at calling the function\n");
        //exit(2);
    }
    else{
        printf("File opened and function called\n");
    }
    
    getchar();

    (*fptr)();


    dlclose(header);
    getchar();

    printf("The main executed\n");
    return 0;
}