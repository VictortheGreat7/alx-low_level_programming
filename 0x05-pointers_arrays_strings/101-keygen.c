#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a random password and prints it to stdout
* Return: Always 0 (Success)
*/

int main(void)
{
  int i, sum, n;
  char c;

  int passwordLength = 10;
  char password[passwordLength];

  srand(time(NULL));

  for (i = 0, sum = 0; sum < passwordLength - 1; i++)
    {
      n = rand() % 62;
      if (n < 26)
	c = 'A' + n;
      else if (n < 52)
	c = 'a' + (n - 26);
      else
	c = '0' + (n - 52);

      password[i] = c;
      sum += c % 10 ? 1 : 0;
    }

  password[i] = '\0';

  printf("%s\n", password);

  return 0;
}
