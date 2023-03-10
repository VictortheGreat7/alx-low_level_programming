#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n--)
*s++ = b;

return (p);
}
