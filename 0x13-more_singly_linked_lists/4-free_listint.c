#include "lists.h"


void free_listint(listint_t *head)
{
	listint_t *currentNode = head;
	listint_t *next;

	while (currentNode != NULL)
	{
		next = currentNode-> next;
		free(currentNode->str);
		free(currentNode);
		currentNode = next;
	}

}
