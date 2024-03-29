#include "lists.h"

/**
* free_listint2 - frees a listint_t list and sets head to NULL
* @head: double pointer to the head of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;

while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}

*head = NULL;
}

