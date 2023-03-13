#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of a program.
* @ac: The number of arguments.
* @av: An array of pointers to the arguments.
* Return: If ac == 0, av == NULL, or the function fails - NULL.
* Otherwise - a pointer to the new string.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);

for (j = 0; av[i][j]; j++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

for (i = 0, k = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
str[k] = av[i][j];

str[k++] = '\n';
}

str[len] = '\0';

return (str);
}
