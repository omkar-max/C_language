#include<stdio.h>
#include<string.h>
#include<stdint.h>
void *my_memcpy(void *src,void *des, size_t n){
    unsigned char* s =(unsigned char*) src;
    unsigned char* d =( unsigned char*) des;

    if (n == 0){
        return des;

    }
    const size_t  word =  sizeof(size_t);
    int same_alignment = (uintptr_t)s % word == (uintptr_t)d % word;

    if(same_alignment){
        while (((uintptr_t)s % word != 0) && n  > 0)
        {
            /* code */
            *d++ = *s++;
            n--;


        }
    }

        size_t *dw = (size_t *) d;
        size_t *sw = (size_t *) s;

        while (n >= word){
            *dw++ = *sw++;
            n = n - word;
        }
        d = (unsigned char*) dw;
        s = (unsigned char *) sw;
        while(n > 0){
            *d++ = *s++;
            n-=1;
        }
        
    return des;
}
int main(){
    char src[] = "I am Omkar";
    char des[50];
    printf("%s", my_memcpy(src,des,strlen(src)));
    return 0;
}