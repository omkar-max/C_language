#include <stdio.h>
#include <stdlib.h>

int global_uninit;             // .bss (uninitialized global)
int global_init = 10;          // .data (initialized global)
const int const_val = 50;      // .rodata (read-only)
static int static_var = 20;    // .data (static initialized)

int main() {
    int local = 5;             // stack
    static int local_static = 100;  // .data (static inside function)
    int *ptr = malloc(sizeof(int)); // heap
    *ptr = 200;

    printf("local=%d, static=%d, global=%d, heap=%d, const=%d\n",
           local, local_static, global_init, *ptr, const_val);
    free(ptr);
    return 0;
}
