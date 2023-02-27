#include "main.h"

/**
* puts2 - prints every other char of a string, starting with the first char
* @str: pointer to a string
*/
void puts2(char *str)
{
int i;

/* Iterate through the string and print every other character */
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}

/* Print a new line character */
_putchar('\n');
}
