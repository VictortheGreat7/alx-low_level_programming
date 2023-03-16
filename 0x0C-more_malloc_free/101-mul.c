#include "main.h"

/**
* _isdigit - checks if a character is a digit
* @c: character to check
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
* mul - multiplies two positive numbers
* @num1: first number
* @num2: second number
*/
void mul(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, res_len, carry = 0, val;
int *res;

while (num1[len1])
len1++;
while (num2[len2])
len2++;

res_len = len1 + len2;
res = malloc(sizeof(int) * res_len);
if (res == NULL)
{
printf("Error\n");
exit(98);
}

for (i = 0; i < res_len; i++)
res[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
val = (num1[i] - '0') * (num2[j] - '0') + carry + res[i + j + 1];
carry = val / 10;
res[i + j + 1] = val % 10;
}
res[i + j + 1] = carry;
}

i = 0;
while (i < res_len - 1 && res[i] == 0)
i++;

while (i < res_len)
{
_putchar(res[i] + '0');
i++;
}
_putchar('\n');

free(res);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
int i, j;

if (argc != 3)
{
printf("Error\n");
return (98);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!_isdigit(argv[i][j]))
{
printf("Error\n");
return (98);
}
}
}

mul(argv[1], argv[2]);

return (0);
}
