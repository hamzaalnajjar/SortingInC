#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H

#include <stddef.h>

// Memory management functions
void* custom_malloc(size_t size);
void custom_free(void* ptr);
void memory_status();

#endif // MEMORYMANAGER_H
