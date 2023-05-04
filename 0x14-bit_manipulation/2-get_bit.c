#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The unsigned long int where we get the bit from.
* @index: The index, staring from 0 of the bit to get.
* Return: The bit's value at index or -1 if there was an error.
* Description: The bitmask variable is used to pinpoint the bit to get
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
mask = 1UL << index;

if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
if (n & mask)
{
return (1);
}
else
{
return (0);
}
}
