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

/**
 * _puts - prints a string to stdout
 *
 * @str: string to print
 */
void _puts(char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++)
	{
	  _putchar(str[i]);
	}

  _putchar('\n');
}

#include <unistd.h>

int _putchar(char c)
{
return (write(1, &c, 1));
}
