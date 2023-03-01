#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The input string.
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
/* If first character of word is lowercase */
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 'a' - 'A';
/* If any non-first character of word is lowercase */
if (str[i] >= 'a' && str[i] <= 'z' &&
(str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}'))
str[i] -= 'a' - 'A';
i++;
}

return (str);
}
