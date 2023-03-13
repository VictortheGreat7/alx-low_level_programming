#include "main.h"
#include <stdlib.h>

/**
* count_words - Counts the number of words in a string.
* @s: The string to count words in.
* Return: The number of words in the string.
*/
int count_words(char *s)
{
int count = 0;
while (*s)
{
if (*s != ' ')
{
count++;
while (*s && *s != ' ')
s++;
}
else
s++;
}
return (count);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
* Return: A pointer to an array of strings (words),
* or NULL if str == NULL or if memory allocation fails.
*/
char **strtow(char *str)
{
char **words;
int i, j, len, wc = 0;
if (str == NULL || *str == '\0')
return (NULL);
wc = count_words(str);
if (wc == 0)
return (NULL);
words = malloc(sizeof(char *) * (wc + 1));
if (words == NULL)
return (NULL);
for (i = 0; i < wc; i++)
{
while (*str == ' ')
str++;

len = 0;
while (*(str + len) &&*(str + len) != ' ')
len++;
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[i][j] = *(str++);
words[i][j] = '\0';
}
words[i] = NULL;
return (words);
}
