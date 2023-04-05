#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: Pointer to pointer to the head of the list.
* Return: The number of nodes freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tmp, *curr = *h;
char address_buffer[32];
char number_buffer[10];

while (curr)
{
count++;
if (curr <= curr->next)
{
print_address((void *) curr, address_buffer);
_putchar(' ');
print_number(curr->n, number_buffer);
_putchar('\n');
break;
}
tmp = curr;
curr = curr->next;
free(tmp);
}
*h = NULL;
return (count);
}

