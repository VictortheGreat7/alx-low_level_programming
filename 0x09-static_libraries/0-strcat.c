#include "main.h"

char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*dest)
dest++;

while ((*dest++ = *src++));

return (p);
}
