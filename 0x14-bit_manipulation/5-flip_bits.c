#include "main.h"

/**
* flip_bits - Returns the number of bits you would need to flip to get from one number to another
* @n: First unsigned long integer
* @m: Second unsigned long integer
* Return: Number of bits to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
unsigned int count = 0;

while (result != 0)
{
count += result & 1;
result >>= 1;
}
return (count);
}
