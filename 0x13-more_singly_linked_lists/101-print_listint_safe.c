#include "lists.h"

/**
* print_listint_safe - Prints a linked list of integers.
* @head: A pointer to the head of the linked list.
* Return: The number of nodes in the linked list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head, *array[1024];
size_t count = 0, i;
char buffer[BUFFER_SIZE];

while (current != NULL)
{
for (i = 0; i < count; i++)
{
if (array[i] == current)
{
_putchar('-');
_putchar('>');
_putchar(' ');
print_address((void *)current, buffer);
_putchar(' ');
print_number(current->n, buffer);
_putchar('\n');
return (count);
}
}
if (count == 1024)
{
_putchar('-');
_putchar('>');
_putchar(' ');
print_address((void *)current, buffer);
_putchar(' ');
print_number(current->n, buffer);
_putchar('\n');
return (count);
}
array[count] = current;
count++;
print_address((void *)current, buffer);
_putchar(' ');
print_number(current->n, buffer);
_putchar('\n');
current = current->next;
}
return (count);
}

/**
* print_address - Prints the memory address of a pointer.
* @buffer: A character buffer to store the hexadecimal representation of
* @ptr: A pointer to print the address of.
*/
void print_address(void *ptr, char buffer[])
{
unsigned long int address = (unsigned long int)ptr;
unsigned int index = 0;

if (address == 0)
{
_putchar('0');
return;
}

while (address > 0)
{
buffer[index] = (address % 16) < 10 ? (address % 16) + '0' :
(address % 16) - 10 + 'a';
address /= 16;
index++;
}

_putchar('[');
_putchar('0');
_putchar('x');

while (index > 0)
{
index--;
_putchar(buffer[index]);
}

_putchar(']');
}

/**
* print_number - Prints an integer.
* @n: The integer to print.
* @buffer: A character buffer to store the hexadecimal representation of
*/
void print_number(int n, char buffer[])
{
int index = 0;

if (n < 0)
{
_putchar('-');
n *= -1;
}

if (n == 0)
{
_putchar('0');
return;
}

while (n > 0)
{
buffer[index] = (n % 10) + '0';
n /= 10;
index++;
}

while (index > 0)
{
index--;
_putchar(buffer[index]);
}
}

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and error is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

