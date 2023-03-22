#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point for the program
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success, otherwise 98, 99, or 100 on failure
 */
int main(int argc, char **argv)
{
  int num1, num2, result;
  int (*func)(int, int);

  if (argc != 4)
	{
	  puts("Error");
	  exit(98);
	}

  num1 = atoi(argv[1]);
  num2 = atoi(argv[3]);

  func = get_op_func(argv[2]);

  if (func == NULL)
	{
	  puts("Error");
	  exit(99);
	}

  if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
	  puts("Error");
	  exit(100);
	}

  result = func(num1, num2);

  printf("%d\n", result);

  return (0);
}
