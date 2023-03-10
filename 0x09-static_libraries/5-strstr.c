#include "main.h"

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n == *h && *n != '\0' && *h != '\0')
{
n++;
h++;
}

if (*n == '\0')
{
return (haystack);
}

haystack++;
}

return (NULL);
}
