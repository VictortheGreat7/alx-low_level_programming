#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer to a string
*/
void rev_string(char *s)
{
int i, len = 0;
char temp;

/* Find the length of the string */
while (s[len] != '\0')
{
len++;
}

/* Swap characters from both ends of the string */
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
