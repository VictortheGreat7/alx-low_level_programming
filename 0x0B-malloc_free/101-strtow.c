#include "main.h"
#include <stdlib.h>

/**
* count_words - Counts the number of words in a string.
* @str: The string to count words in.
* Return: The number of words in @str.
*/
static int count_words(char *str)
{
int count = 0, in_word = 0;
while (*str)
{
if (*str == ' ')
in_word = 0;
else if (!in_word)
{
in_word = 1;
count++;
}
str++;
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
int num_words, i, j, k, len;
if (str == NULL || *str == '\0')
return (NULL);
num_words = count_words(str);
words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
while (*str)
{
if (*str == ' ')
{
str++;
continue;
}
j = 0;
while (str[j] != ' ' && str[j] != '\0')
j++;
len = j;
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[i][j] = str[j];
words[i][j] = '\0';
i++;
str += len;
}
words[num_words] = NULL;
return (words);
}
