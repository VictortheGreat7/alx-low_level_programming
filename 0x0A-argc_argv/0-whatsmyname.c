#include "main.h"

/**
* main - prints the name of the program
* @argc: number of command-line arguments
* @argv: array of command-line arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{

_puts(argv[i]);
}

return (0);
}
