#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list
*               and returns the head node's data.
* @head: Pointer to a pointer to the head node of the list.
* Return: The head node's data (n) or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = temp->next;
free(temp);

return (data);
}

