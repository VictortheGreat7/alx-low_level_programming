#include "main.h"

/**
* get_endianness - Chexks the endianness of the system
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int test = 1;
char *ptr = (char *)&test;

if (*ptr == 1)
return (1);
else
return (0);
}
