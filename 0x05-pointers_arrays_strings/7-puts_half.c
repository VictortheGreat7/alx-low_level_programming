#include "main.h"

/**
* _strlen - computes the length of a string
* @s: pointer to the first character of the string
* Return: the number of characters in the string
*/
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return len;
}

/**
* puts_half - prints half of a string, followed by a new line
* @str: pointer to the first character of the string
*/
void puts_half(char *str)
{
int len = _strlen(str);
int i;

/* Compute the starting index for the second half of the string */
int start = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;

/* Print the second half of the string */
for (i = start; i < len; i++)
{
_putchar(str[i]);
}

/* Print a new line character */
_putchar('\n');
}
