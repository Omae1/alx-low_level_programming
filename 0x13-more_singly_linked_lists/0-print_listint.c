#include "lists.h"

/**
* print_listint - prints the number of elements
*@h: Linked list
*Return: returns the no. of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
