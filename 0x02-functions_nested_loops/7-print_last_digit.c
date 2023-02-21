#include "main.h"
#include <limits.h>

/**
* print_last_digit - prints the last digit of a number and returns its value
* @n: the number to get the last digit of
* Return: the value of the last digit of n
*/

int print_last_digit(int n)
{
int last_digit;

if (n == INT_MIN)
{
last_digit = 8;
}
else
{
if (n < 0)
{
n = -n;
}
last_digit = n % 10;
}
_putchar(last_digit + '0');

return (last_digit);
}
