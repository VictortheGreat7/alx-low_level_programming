#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen(s + 1) + 1);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: pointer to the string
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen(s);

if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
return (is_palindrome(s + 1) && 1);
else
return (0);
}
