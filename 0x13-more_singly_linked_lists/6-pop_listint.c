#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: Linked list
*Return: returns the head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int nodeData;

	if (*head == NULL)
		return (0);

	nodeData = temp->n;

	*head = (*head)->next;

	free(temp);

	return (nodeData);
}
