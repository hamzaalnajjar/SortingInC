#include <stdio.h>
#include "memorymanager.h"

int main() {
    printf("Memory Manager Test\n");

    // allocate memory
    void* ptr = custom_malloc(100);
    if (ptr) {
        // simulate using the allocated memory
    }

    // free mem
    custom_free(ptr);

    // check memory 
    memory_status();

    return 0;
}
