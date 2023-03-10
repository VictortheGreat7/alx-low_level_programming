#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;

while (n--)
*dest++ = *src++;

return (p);
}
