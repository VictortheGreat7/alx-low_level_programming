#include "main.h"

/**
* _strstr - finds the first occurrence of the substring needle
*           in the string haystack
* @haystack: the string to search in
* @needle: the substring to search for
* Return: pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
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
