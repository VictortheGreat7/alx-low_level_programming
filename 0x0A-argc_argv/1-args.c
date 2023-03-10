#include "main.h"

/**
* main - prints the number of arguments passed into the program
* @argc: the number of command-line arguments
* @argv: an array of pointers to the command-line arguments
* Return: 0 (Success)
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);

return (0);
}
