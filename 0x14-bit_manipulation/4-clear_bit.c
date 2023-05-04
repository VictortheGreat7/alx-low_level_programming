#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index
* @n: Pointer to the number to be modified
* @index: The index, starting from 0, of the bit to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitmask;
bitmask = 1 << index;
bitmask = ~(1 << index);
*n &= bitmask;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return (1);
}
