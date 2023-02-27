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

  /* Password length constant */
  const int passwordLength = 10;
  char *password = malloc(sizeof(char) * (passwordLength + 1));

  if (password == NULL) {
    fprintf(stderr, "Failed to allocate memory for password.\n");
    return EXIT_FAILURE;
  }

  srand(time(NULL));

  /* Generate the random password */
  for (i = 0, sum = 0; sum < passwordLength - 1; i++)
    {
      n = rand() % 62;
      if (n < 26)
	password[i] = 'A' + n;
      else if (n < 52)
	password[i] = 'a' + (n - 26);
      else
	password[i] = '0' + (n - 52);

      sum += password[i] % 10 ? 1 : 0;
    }

  /* Add null terminator to the end of the password */
  password[i] = '\0';

  /* Print the password */
  printf("%s\n", password);

  /* Free the dynamically allocated memory */
  free(password);

  return EXIT_SUCCESS;
}
