#include "lists.h"

/**
* free_listint - Frees a listint_t list.
* @head: Pointer to the start of the list.
* @temp: Pointer to a place that temporarily stores the current node being
* freed.
* Return: Nothing.
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head =head->next;
free(temp);
}
}
