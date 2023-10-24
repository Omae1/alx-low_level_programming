#include "lists.h"
/**
*insert_nodeint_at_index - inserts a newnode at any given position
*@head: a linked list
*@idx: index of a node
*@n: data of a node
*Return: address of the new element
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *current = *head;
	listint_t *previous;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (; i < idx && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (i != idx)
	{
		free(newNode);
		return (NULL);
	}

	previous->next = newNode;
	newNode->next = current;
	return (newNode);

}
