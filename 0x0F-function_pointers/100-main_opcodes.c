#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, 1 on incorrect argument count, 2 on negative byte count
*/
int main(int argc, char *argv[])
{
int i, bytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}

char *addr = (char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02hhx", addr[i]);
if (i != bytes - 1)
printf(" ");
}

printf("\n");
return (0);
}
