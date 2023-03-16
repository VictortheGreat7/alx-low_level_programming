#include "main.h"

/**
* _calloc - Allocates memory for an array using malloc.
* @nmemb: Number of elements in the array.
* @size: Size of each element in bytes.
* Return: Pointer to the allocated memory or NULL if malloc fails or either
*         nmemb or size is 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;

return ((void *)ptr);
}
