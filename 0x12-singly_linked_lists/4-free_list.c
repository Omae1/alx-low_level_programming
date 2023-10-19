#include "lists.h"
#include <string.h>

/**
*free_list - frees up the list
*@head: a linked list
*/
void free_list(list_t *head)
{
	list_t *currentNode = head;
	list_t *next;

	while (currentNode != NULL)
	{
		next = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = next;
	}
}
