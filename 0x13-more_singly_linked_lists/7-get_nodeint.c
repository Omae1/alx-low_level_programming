#include "lists.h"

/**
*get_nodeint_at_index - returns nth node of a linked list
*@head: a linked list
*@index: the index of a node
*Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i != index)
		return (NULL);
	else
		return (head);
}
