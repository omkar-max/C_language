#include <stdio.h>
#include <stdlib.h>

int global_uninit;             // .bss
int global_init = 10;          // .data
const int const_val = 50;      // .rodata
static int static_var = 20;    // .data

int main() {
    int local = 5;             // stack
    static int local_static = 100;  // .data
    int *ptr = malloc(sizeof(int)); // heap
    *ptr = 200;

    printf("Addresses:\n");
    printf("&global_uninit  = %p\n", (void*)&global_uninit);
    printf("&global_init    = %p\n", (void*)&global_init);
    printf("&const_val      = %p\n", (void*)&const_val);
    printf("&static_var     = %p\n", (void*)&static_var);
    printf("&local_static   = %p\n", (void*)&local_static);
    printf("&local          = %p\n", (void*)&local);
    printf("heap ptr        = %p\n", (void*)ptr);

    free(ptr);
    return 0;
}
    