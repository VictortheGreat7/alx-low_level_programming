#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
* @s: pointer to the string
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
char *p = s;
int len = 0;

while (*p != '\0')
{
p++;
len++;
}

while (s < p)
{
if (*s != *(p - 1))
return (0);
s++;
p--;
}

return (1);
}
