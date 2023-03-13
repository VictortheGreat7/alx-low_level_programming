#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* count_words - Counts the number of words in a string
* @str: The string to count words in
* Return: The number of words in str
*/
int count_words(char *str)
{
int count = 0, i, is_word = 0;
for (i = 0; str[i] != '\0'; ++i)
{
if (str[i] != ' ')
{
if (!is_word)
{
++count;
is_word = 1;
}
}
else
{
is_word = 0;
}
}
return (count);
}

/**
* strtow - Splits a string into words
* @str: The string to split
* Return: A pointer to an array of strings (words)
*/
char **strtow(char *str)
{
int i, j, k, len, words;
char **arr;
if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
arr = malloc(sizeof(char *) * (words + 1));
if (arr == NULL)
return (NULL);
for (i = 0, j = 0; i < words; ++i)
{
while (str[j] == ' ')
++j;
len = 0;
while (str[j + len] != ' ' && str[j + len] != '\0')
++len;
arr[i] = malloc(sizeof(char) * (len + 1));
if (arr[i] == NULL)
{
for (k = 0; k < i; ++k)
free(arr[k]);
free(arr);
return (NULL);
}
for (k = 0; k < len; ++k)
arr[i][k] = str[j++];
arr[i][k] = '\0';
}
arr[i] = NULL;
return (arr);
}
