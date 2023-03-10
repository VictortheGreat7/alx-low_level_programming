#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* is_positive_number - checks if a string represents a positive number
* @str: the string to check
* Return: 1 if the string is a positive number, 0 otherwise
*/
int is_positive_number(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}

return (1);
}

/**
* main - adds positive numbers
* @argc: the number of command-line arguments
* @argv: an array of pointers to the command-line arguments
* Return: 0 if successful, 1 otherwise
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
