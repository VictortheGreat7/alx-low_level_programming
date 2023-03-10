#include "main.h"

char *_strpbrk(char *s, char *accept)
{
char *p;
for (; *s != '\0'; s++) {
for (p = accept; *p != '\0'; p++)
{
if (*s == *p)
{
return (s);
}
}
}
return (NULL);
}
