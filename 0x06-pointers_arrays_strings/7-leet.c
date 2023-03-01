#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to be encoded.
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
int i, j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 8; j++)
{
if (str[i] == leet[j] || str[i] == leet[j] + 32)
{
str[i] = j + '0';
break;
}
}
}

return (str);
}
