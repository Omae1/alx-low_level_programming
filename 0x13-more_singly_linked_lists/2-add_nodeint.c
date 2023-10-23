#include "lists.h"

/**
*add_nodeint - adds a new node at the beginning of a list
*@head: linked list
*@n: number of nodes
*Return: the address of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->next = *head;
	temp->n = n;

	*head = temp;

	return (temp);
}
