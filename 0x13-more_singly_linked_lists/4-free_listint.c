#include "lists.h"

/**
*free_listint - frees listint_t list
*@head: linked list
*/
void free_listint(listint_t *head)
{
	listint_t *currentNode = head;
	listint_t *next;

	while (currentNode != NULL)
	{
		next = currentNode->next;
		free(currentNode);
		currentNode = next;
	}

}
