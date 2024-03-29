#include "main.h"

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previously allocated with malloc(old_size)
* @old_size: Size in bytes of the allocated space for ptr
* @new_size: New size in bytes of the new memory block
* Return: Pointer to the reallocated memory block
*         NULL if new_size = 0 and ptr != NULL
*         NULL if memory allocation fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr;
unsigned int i;

if (old_size == new_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

old_ptr = ptr;

for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = old_ptr[i];

free(ptr);

return (new_ptr);
}
