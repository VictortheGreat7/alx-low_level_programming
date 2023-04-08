#include "main.h"

/**
* print_binary - Prints the binary representation of n
* @n: The number meant to be converted
* Description: The bitmask variable is used to pinpoint the desired bit
* Return: Nothing
*/

void print_binary(unsigned long int n)
{
unsigned int bitmask = 1;
int shift = 0;
while (bitmask <= n >> 1)
{
shift += 1;
bitmask = bitmask << 1;
}
while (shift >= 0)
{
_putchar(((n >> shift) &1) + '0');
shift--;
}
}
