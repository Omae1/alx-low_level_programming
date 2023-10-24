#include "lists.h"

/**
*delete_nodeint_at_index - deletes node at position index
*@head: a linked list
*@index: node's position
*Return: 1 if successful and -1 when unsuccessful
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode = *head;
	listint_t *previousNode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *tempNode = *head;
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}

	for (; i < index && currentNode != NULL; i++)
	{
		previousNode = currentNode;
		currentNode = currentNode->next;
	}

	if (currentNode == NULL)
		return (-1);

	previousNode->next = currentNode->next;
	free(currentNode);
	return (1);
}
