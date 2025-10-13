#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    // char *ptr = "Omkar";
    // ptr[0] = "o";
    // printf("%s", ptr); This is illegal we can change the stirng literal because it is stored in the .roddata

    char *ptr = (char*)malloc(20);

    // strcpy(ptr, "omkar");

    // printf("%s", ptr); This is good.

    scanf("%s", ptr);
    printf("%s", ptr);


    return 0;
}