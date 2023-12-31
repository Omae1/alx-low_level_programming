#include "lists.h"

/**
*free_listint2 - frees listint_t list and sets head to NULL
*@head: linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;

}
