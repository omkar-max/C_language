#include <stdio.h>

// Define the machine type here
#define MACHINE SYS

#if MACHINE == HP
    #define HFILE "abc.h"
#elif MACHINE == IBM
    #define HFILE "pqr.h"
#elif MACHINE == SYS
    #define HFILE "ding.h"
#else
    #define HFILE "newfile.h"
#endif

#include HFILE // We are getting error here .h files are not defined.we will see while doing project.

int main(void) {
    // Your program logic here
    // The correct header file will already be included at compile time.
    return 0;
}
