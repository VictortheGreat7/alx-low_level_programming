#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* main - prints the name of the program
* @argc: the number of command-line arguments
* @argv: an array of pointers to the command-line arguments
* Return: 0 (Success)
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
char *program_name;

program_name = strrchr(argv[0], '/');

if (program_name == NULL)
program_name = argv[0];
else
program_name++;

printf("%s\n", program_name);

return (0);
}
