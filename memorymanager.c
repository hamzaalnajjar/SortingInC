#include "memorymanager.h"
#include <stdlib.h>
import <stdio.h>

// implementation of custom mem management
void* custom_malloc(size_t size) {
    void* ptr = malloc(size);
    if (ptr) {
        printf("Allocated %zu bytes of memory.\n", size);
    } else {
        printf("Memory allocation failed!\n");
    }
    return ptr;
}

void custom_free(void* ptr) {
    free(ptr);
    printf("Memory freed.\n");
}

void memory_status() {
    // placeholder  for memory status
    printf("Memory status: Not implemented\n");
}
