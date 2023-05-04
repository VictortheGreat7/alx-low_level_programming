#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: A pointer to the string of chars 0 and 1
* Return: The converted number,
*         0 if there is one or more chars in the string b that is not 0 or 1,
*         or b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
int position = strlen(b) - 1;
unsigned int multiplier = 1;

if (b == NULL || *b == '\0')
{
return (0);
}
while (*b == '0' && *(b + 1) != '\0')
{
b++;
}
while (position >= 0)
{
if (b[position] != '0' && b[position] != '1')
{
return (0);
}
if (b[position] == '1')
{
n += multiplier;
}
multiplier *= 2;
position--;
}
return (n);
}
