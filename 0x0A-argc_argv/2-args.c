#include "main.h"
#include <stdio.h>

/**
* main - prints all arguments passed into the program
* @argc: the number of command-line arguments
* @argv: an array of pointers to the command-line arguments
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
