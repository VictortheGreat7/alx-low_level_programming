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
unsigned int position = 0;
unsigned int decimal_value = 1;

if (b == NULL)
return (0);

position = strlen(b) - 1;
while (position < strlen(b))
{
if (b[position] != '0' && b[position] != '1')
return (0);
if (b[position] == '1')
n += decimal_value;
decimal_value *= 2;
position--;
}
return (n);
}
